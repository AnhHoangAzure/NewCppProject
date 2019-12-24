#include <iostream>
#include <vector>
using namespace std;
int avoidObstacles(std::vector<int> inputArray) {

    int length = inputArray.size();
    std::vector<int> checkArray;
    int sample = 1;
    int i = 0;
    int res = 0;
    for( i = 0; i < length - 1; i++)
    {
        for( int j = i + 1; j < length; j++)
        {
            if(inputArray.at(j) <= inputArray.at(i))
            {
                int tmp = inputArray.at(i);
                inputArray.at(i) = inputArray.at(j);
                inputArray.at(j) = tmp;
            }
        }
    }
    while(true)
    {
        bool isRes = false;
        for(i = 0 ; i < length; i++)
        {
            if(inputArray.at(i) != sample && inputArray.at(i)%sample != 0)
            {
                isRes = true;
            }
            else
            {
                isRes = false;
                break;
            }
        }
        if(!isRes)
           sample++;
        else
        {
            res = sample;
            break;
        }

        if(sample == inputArray.at(length - 1))
        {
            res =  inputArray.at(length - 1) + 1;
            break;
        }
    }
    return res;
}

int main()
{
    std::vector<int> inputArray;
    inputArray.push_back(2);
    inputArray.push_back(4);
    inputArray.push_back(10);
    inputArray.push_back(1);
    inputArray.push_back(6);
    int result = avoidObstacles(inputArray);
    cout << "Result :" <<result<< endl;
    return 0;
}
