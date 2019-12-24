#include <iostream>

using namespace std;
bool isBeautifulString(std::string inputString) {
    bool res = true;
    int alpabetCount[26] = {0};
    int i = 0;
    for(i = 0 ; i < inputString.size();i++){
        int tmp;
        tmp = inputString[i] - 97;
        alpabetCount[tmp]++;
    }
    for(i = 0 ; i<25; i++ )
    {
        for(int j = i+ 1; j < 26; j++){
            if(alpabetCount[j] <= alpabetCount[i])
            {
                res = true;
            }
            if(alpabetCount[j] > alpabetCount[i])
            {
                res = false;
                break;
            }


        }
        if(res == false)
            break;
    }
    return res;
}
int main()
{
    cout << "Result = "<<isBeautifulString("bbc") << endl;
    return 0;
}
