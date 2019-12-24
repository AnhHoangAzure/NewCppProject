#include <stdio.h>
#include <iostream>
#include <sstream>
#include <vector>
#define WORD_START_MODELNUM     27
#define WORD_END_MODELNUM       46
#define WORD_SELF_TEST_SUPPORT  87
#define WORD_ULTRA_DMA_MODES    88
using namespace std;

// An unsigned char can store 1 Bytes (8bits) of data (0-255)
typedef unsigned char BYTE;

// 1 WORD has 2 bytes and each byte has 8bits
struct WordType{
    unsigned int rightByte;//2nd byte (bit 8-15)
    unsigned int leftByte;//1st byte(bit 0-7)
};
// Get the size of a file
long getFileSize(FILE *file)
{
    long lCurPos, lEndPos;
    lCurPos = ftell(file);
    fseek(file, 0, 2);
    lEndPos = ftell(file);
    fseek(file, lCurPos, 0);
    return lEndPos;
}
//convert from Dec -> Bin
std::vector<unsigned int>decTobinFunc(unsigned int decimaNumber){
    int tmpBinArray[8] = {0};
    for(int j = 7;j >=0; j--)
    {
        tmpBinArray[j] = decimaNumber%2;
        decimaNumber = decimaNumber/2;
        if(decimaNumber == 0)
            break;
    }
    std::vector<unsigned int> binValue(std::begin(tmpBinArray),std::end(tmpBinArray));
    return binValue;
}
//Get value from ASCII table based on the index(decima)
char getCharacterFromIndex(unsigned int index)
{
    char result;
    result = static_cast<char>(index);
    return result;
}
int main()
{
    string fileName;
    cout<<"Insert Binary file's name (e.g:Identify1.bin): ";
    cin>>fileName;
    const char *filePath = fileName.c_str();
    //const char *filePath = "/Users/Anh/src/CppProject/BinTest1/identify2.bin";
    BYTE *fileBuf;			// Pointer to our buffered data
    FILE *file = NULL;		// File pointer
    vector <WordType>wordList;//Store all the word of the response message
    string modelNumber = "";
    int highestSupportedMode = 0;
    int i = 0;
    //I. Open the file in binary mode using the "rb" format string
    // This also checks if the file exists and/or can be opened for reading correctly
    if ((file = fopen(filePath, "rb")) == NULL)
        cout << "Could not open specified file" << endl;
    else
        cout << "File opened successfully" << endl;

    // Get the size of the file in bytes
    long fileSize = getFileSize(file);

    // Allocate space in the buffer for the whole file
    fileBuf = new BYTE[fileSize];

    // Read the file in to the buffer
    fread(fileBuf, fileSize, 1, file);

    // Now data is stored in fileBuf, let add them into a wordlist
    while(true)
    {
        WordType tmp;
        tmp.rightByte = static_cast<unsigned int>(fileBuf[i]);
        tmp.leftByte = static_cast<unsigned int>(fileBuf[i+1]);
        wordList.push_back(tmp);
        i = i+2;
        if(i>fileSize)
            break;
    }

    //II. OUTPUT
    cout<<"OUTPUT:"<<endl;
    //1. Get the model Number info
    /*
    * From ATA8-ACS document Page 91
    * Model number is stored from Word 27(WORD_START_MODELNUM) to Word 46(WORD_END_MODELNUM)
    */
    for(i = WORD_START_MODELNUM ; i <= WORD_END_MODELNUM; i++)
    {
        int rightCharIndex = wordList.at(i).rightByte;
        int leftCharIndex = wordList.at(i).leftByte;
        modelNumber = modelNumber + getCharacterFromIndex(rightCharIndex) + getCharacterFromIndex(leftCharIndex);
    }
    cout<<"1. Model number: "<<modelNumber<<endl;

    //2. Higest supported Ultra DMA mode
    /*
    * From ATA8-ACS document Page 95
    * In Word 86 Command set/feature enabled/supported
    * The highest supported mode is indicated from bit(0-6) in 1st byte of the WORD 86
    */
    vector<unsigned int> wordUltraDMA_SupportedBin = decTobinFunc(wordList.at(WORD_ULTRA_DMA_MODES).leftByte) ;
    for (i = wordUltraDMA_SupportedBin.size() -1; i>=0; i--)
    {
        if(wordUltraDMA_SupportedBin.at(i) == 1)
        {
            highestSupportedMode = i;
            break;
        }
    }
    cout<<"2. Higest supported Ultra DMA mode: "<<highestSupportedMode<<endl;

    //3. SMART self-test supported
    /*
    * From ATA8-ACS document Page 96
    * Smart seft-test supported is described from bit(1) of 1st byte of the WORD 87
    * 1 = supported/ 0 = Not supported
    */
    vector<unsigned int> word87Bin = decTobinFunc(wordList.at(WORD_SELF_TEST_SUPPORT).leftByte) ;
    if(word87Bin.at(1) == 1)
        cout<<"3. SMART self-test IS supported"<<endl;
    else
        cout<<"3. SMART self-test is NOT supported"<<endl;

    cin.get();

    delete[]fileBuf;
        fclose(file);   // Close the file after completing
    return 0;
}
