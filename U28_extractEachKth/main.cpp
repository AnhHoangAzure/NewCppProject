#include <iostream>
#include <vector>
using namespace std;
std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    int length = inputArray.size();
    std::vector<int> res;
    int i = 0;
    while(i < length)
    {
        if((i+1)%k != 0)
        {
            int tmp = inputArray.at(i);
            res.push_back(tmp);
        }
        i++;
    }
    return res;

}

int main()
{
    std::vector<int> inputArray, res;
    inputArray.push_back(1);
    inputArray.push_back(2);
    inputArray.push_back(3);
    inputArray.push_back(4);
    inputArray.push_back(5);
    inputArray.push_back(6);

    res = extractEachKth(inputArray,3);
    cout << "Hello World!" << endl;
    return 0;
}
