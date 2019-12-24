#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int commonCharacterCount(std::string s1, std::string s2) {

    int length_S1 = 0 , length_S2 = 0;
    length_S1 = s1.length();
    length_S2 = s2.length();
    int result = 0;
    std::vector<int> count_s1, count_s2;
    std::vector<std::string> tmp_s1, tmp_s2;
    for(int i = 0; i < length_S1; i++)
    {
        std::string tmpStr;
        tmpStr = s1.at(i);
        if(tmpStr.compare("*") != 0)
        {
            tmp_s1.push_back(tmpStr);
        }
        else
            continue;
        int count = 0;
        int countS2 = 0;
        for(int j = 0; j < length_S1; j ++)
        {
            std::string tmpStrj;
            tmpStrj = s1.at(j);
            if(tmpStrj.compare(tmpStr) == 0 && tmpStrj.compare("*") != 0)
            {
                s1.at(j)= '*';
                count++;
            }
        }
        if(count>0)
            count_s1.push_back(count);

        for(int k = 0; k < length_S2; k++)
        {
            std::string tmpStr2;

            tmpStr2 = s2.at(k);
            if(tmpStr2.compare(tmpStr) == 0)
            {
                s2.at(k) = '*';
                countS2++;
            }
        }
        if(countS2 == 0)
        {
            continue;
        }
        if(countS2>= count)
            result = result + count;
        else
            result = result + countS2;
    }


    return result;
}

int main()
{
    cout << "Hello World!" << endl;
    std::string s1 = "zzzz";
    std::string s2 = "zzzzzzz";
    int result = commonCharacterCount(s1,s2);
    cout<<"Result = "<<result<<endl;
    return 0;
}
