#include <iostream>
#include <vector>
using namespace std;
bool palindromeRearranging(std::string inputString) {
    std::vector<int> charCount;
    int length = inputString.length();
    std::string tmp_i = "";
    std::string tmp_j = "";
    bool res = false;
    for(int i = 0; i < length; i ++)
    {
        tmp_i = inputString.at(i);
        int count = 0;
        for(int j = i; j < length; j ++)
        {
            tmp_j = inputString.at(j);
            if(tmp_j.compare(tmp_i) == 0 && tmp_j.compare("*") != 0)
            {
                count++;
                inputString.at(j) = '*';
            }
        }
        if(count > 0)
            charCount.push_back(count);
    }
    int count_One = 0;
    if(charCount.size() == 1)
        return true;
    if(charCount.size() < 1)
        return false;
    for(int j = 0; j < charCount.size(); j++)
    {
        if(charCount.at(j) == 1)
            count_One++;
        if(count_One > 1 || (charCount.at(j)%2 != 0 && charCount.at(j) !=1))
        {
            res = false;
            break;
        }
        else
            res = true;
    }
    return res;
}

int main()
{
    std::string inputString = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc";
    bool result = palindromeRearranging(inputString);
    cout << "Result: " << result << endl;
    return 0;
}
