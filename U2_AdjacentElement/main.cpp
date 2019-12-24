#include <iostream>
#include <vector>
using namespace std;

int adjacentElementsProduct(std::vector<int> inputArray) {

    int length = inputArray.size();
    std::vector<int> productArray;
    int tmp;
    int result = inputArray.at(0)*inputArray.at(1);
    for(int i = 0 ; i < length-1; i++)
    {
        tmp = inputArray.at(i)*inputArray.at(i+1);
        cout<<"tmp = "<<tmp<<endl;
       if(tmp >= result)
           result = tmp;
    }

    cout<<"result = "<<result<<endl;
    return result;
}


int main() {
    std::vector<int> inputArray;
    inputArray.push_back(1);
    inputArray.push_back(2);
    inputArray.push_back(3);
    inputArray.push_back(0);
    int res = adjacentElementsProduct(inputArray);
    cout<<"result is :"<<res<<endl;
    return 0;
}
