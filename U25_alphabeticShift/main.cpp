#include <iostream>
#include <string>
using namespace std;
std::string alphabeticShift(std::string inputString) {

    std::string res;
    int strLength = inputString.length();
    int i = 0;
    while(true){
        int index = tolower(inputString[i]) - 'a' + 1;
        if(inputString[i] == 'z')
        {
            inputString[i] = 'a';
        }
        else
        {
            inputString[i]++;
        }
        i++;
        if(i == strLength)
            break;

    }
    return inputString;
}
int main()
{
    std::string input = "crazy";
    std::string res = alphabeticShift(input);
    cout << "Hello World! res : " << res<<endl;
    return 0;
}
