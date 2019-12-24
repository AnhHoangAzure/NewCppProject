#include <iostream>
#include <vector>
using namespace std;
int arrayChange(std::vector<int> inputArray) {
    int length = inputArray.size();
    int round = 0;
    int count = 0;
    int result = 0;
    while(round < length - 1)
    {
        count = 0;
        if(inputArray.at(round+1) <=inputArray.at(round))
        {
            count = abs(inputArray.at(round) - inputArray.at(round+1) + 1);
            inputArray.at(round+1) += count;
        }
        result += count;
        round++;
    }
    return result;

}

int main()
{
    std::vector<int> inputArray;
    inputArray.push_back(1);
    inputArray.push_back(1);
    //inputArray.push_back(10);
    inputArray.push_back(1);
    int result = arrayChange(inputArray);
    cout << "Result: "<<result << endl;
    return 0;
}
