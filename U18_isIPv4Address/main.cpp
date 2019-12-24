#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isIPv4Address(std::string inputString) {
    int countDot = 0;
    std::vector<int> indexDotPos;
    bool res = false;
    int i = 0;
    for( i = 0 ; i < inputString.length(); i++)
    {
        if(inputString.at(i) == '.')
        {
            countDot++;
            indexDotPos.push_back(i);
        }
    }
    if(countDot != 3)
        return false;
    for (  i = 0; i < inputString.length(); i++ )          // loop through characters of string
      {
        if(inputString.at(i) != '.')
        {
         int digit = inputString.at(i) - '0';
         if(digit < 0 || digit > 9)
         {
             res = false;
             return res;
         }
        }
        if(inputString.at(i) == '.' && i == 0 || inputString.at(i) == '.' && inputString.at(i+1) == '.' )
        {
            res = false;
            return res;
        }
      }
    std::string numStr1 = "",numStr2 = "",numStr3 = "",numStr4 = "";
    int numInt[4] = {0};
    numStr1 = inputString.substr(0, indexDotPos.at(0));
    numStr2 = inputString.substr(indexDotPos.at(0) + 1, indexDotPos.at(1) - indexDotPos.at(0) -1);
    numStr3 = inputString.substr(indexDotPos.at(1) + 1, indexDotPos.at(1) - indexDotPos.at(0) -1);
    numStr4 = inputString.substr(indexDotPos.at(2) + 1, indexDotPos.size() - indexDotPos.at(2) -1);

    numInt[0] = atoi(numStr1.c_str());
    numInt[1] = atoi(numStr2.c_str());
    numInt[2] = atoi(numStr3.c_str());
    numInt[3] = atoi(numStr4.c_str());

    for(int k = 0; k < 4; k++)
    {

        if(numInt[k] > 255 || numInt[k] < 0)
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
    std::string inputString;
    inputString = "1a.1.1.1a";
    bool result = isIPv4Address(inputString);
    cout << "Hello World!" << endl;
    return 0;
}
