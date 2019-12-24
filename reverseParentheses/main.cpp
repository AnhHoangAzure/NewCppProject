#include <iostream>
#include <string>
using namespace std;
std::string reverseSubString(std::string s)
{
    int length = s.length();
    std::string result = "";
    int indexL = 0;
    int indexR = 0;
    int tmp = 0;
    for(int i = 0; i < length; i ++)
    {
        if(s.at(i) == ')')
        {
            indexR = i;
            break;
        }

    }
    for(int i = indexR - 1; i >= 0; i --)
    {
        if(s.at(i) == '(')
        {
            indexL = i;
            break;
        }
    }
    for(int i1 = 0; i1 < indexL; i1++)
    {
        result = result + s.at(i1);
    }
    for(int i2 = indexR - 1; i2 > indexL; i2--)
    {
        result = result + s.at(i2);
    }
    for(int i3 = indexR + 1; i3 < length; i3++)
    {
        result = result + s.at(i3);
    }
    return result;
}
std::string reverseParentheses(std::string s) {
    int index = 0;
    while(index < s.length())
    {
        if(s.at(index) == '(')
        {
            s = reverseSubString(s);
            index = 0;
        }
        else
            index++;
    }
    return s;
}

int main()
{
    string s = "a(bcdefghijkl(mno)p)q";
    string result = reverseParentheses(s);
    cout<<"Result: "<<result<<endl;
    return 0;
}
