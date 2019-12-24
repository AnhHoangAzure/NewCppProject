#include <iostream>

using namespace std;
std::string longestDigitsPrefix(std::string inputString) {
    string res = "";
    int i = 0;
    if(inputString[0] < 48 &&  inputString[0] > 57)
        return "";
    else{
        while(true)
        {
            if(inputString[i] >= 48 &&  inputString[i] <= 57){
                res += inputString[i];
                i++;
            }
            else
                break;
        }
    }
    return res;

}
int main()
{
    cout << "res = "<< longestDigitsPrefix(" 1234a") << endl;
    return 0;
}
