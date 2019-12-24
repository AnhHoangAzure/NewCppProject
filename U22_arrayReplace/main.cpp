#include <iostream>
#include <vector>
using namespace std;
std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for(int i = 0 ; i < inputArray.size();i++)
    {
        if(inputArray.at(i) == elemToReplace)
            inputArray.at(i) = substitutionElem;
    }


}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
