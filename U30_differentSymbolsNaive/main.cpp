#include <iostream>
#include <string>
using namespace std;
int differentSymbolsNaive(std::string s) {
    int length = s.length();
    int res = 0;
    for(int i = 0; i < length - 1;i++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if(s[j] == s[i])
                s[j] = '-';
        }
    }
    for(int i = 0; i < length;i++)
    {
        if(s[i]!= '-')
            res++;
    }
    return res;

}
int main()
{
    std::string input = "abcdca";
    int res = differentSymbolsNaive(input);
    cout << "Result: " <<res<< endl;
    return 0;
}
