#include <iostream>
#include <string>
using namespace std;
char firstNotRepeatingCharacter(std::string s) {
    int length = s.length();
    char result;
    bool isFound = false;
    for(int i = 0; i < length; i++)
    {
        char tmp;
        tmp = s[i];
        for(int j = i+ 1; j < length;j++)
        {

            if(s[j] == tmp && s[j] != '-')
            {
                s[i] = '-';
                s[j] = '-';
            }
        }
    }
    for(int i = 0; i < length; i++)
    {
        if(s[i] != '-')
        {
            result = s[i];
            isFound = false;
            break;
        }
        else
            isFound = true;
    }
    if(isFound)
        return '_';
    else
        return result;
}
int main()
{
    std::string s = "c";
    char res = firstNotRepeatingCharacter(s);

    cout << "res: " <<res<< endl;
    return 0;
}
