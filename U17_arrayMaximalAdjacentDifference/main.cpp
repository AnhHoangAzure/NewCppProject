#include <iostream>
#include <vector>
using namespace std;
int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    std::vector<int> difArray;
    if(inputArray.size() ==0)
        return NULL;
    for(int i = 0; i < inputArray.size() - 1;i++)
    {
        int tmp = 0;
        tmp = abs(inputArray.at(i) - inputArray.at(i+1));
        difArray.push_back(tmp);
    }
    int max = difArray.at(0);
    for(int j = 1; j < difArray.size(); j++)
    {
        if(difArray.at(j) >= max)
            max = difArray.at(j);
    }
    return max;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
