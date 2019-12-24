#include <iostream>

using namespace std;
char firstDigit(std::string inputString) {
    int length = inputString.length();
    int i = 0;
    char res;
    while(i < length)
    {
        int tmp = inputString[i] - '0';
        if(tmp >=0 && tmp <= 9)
        {
            res = inputString[i];
            break;
        }
        i++;
    }
    return res;
}

int main()
{
    std::string inputString = "cong1anh";
    char res = firstDigit(inputString);
    cout << "Hello World!" <<res<< endl;
    return 0;
}
