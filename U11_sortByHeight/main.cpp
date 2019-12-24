#include <iostream>
#include <vector>
using namespace std;
void InterchangeSort(std::vector<int>&InputArray, std::vector<int>&OutArray)
{
    int length = InputArray.size();
    for(int i = 0; i < length - 1; i ++)
    {
        for(int j = i + 1; j < length; j ++)
            if(InputArray.at(i) > InputArray.at(j) && InputArray.at(j) != -1)
            {
                int tmp = InputArray.at(i);
                InputArray.at(i) = InputArray.at(j);
                InputArray.at(j) = tmp;
            }
    }
    OutArray = InputArray;

}
void StraightSelectionSort(std::vector<int>&InputArray){
    //1 Find the smalliest element
    //2 swap with the elements on the Leftmost
    int length = InputArray.size();
    for(int i = 0; i < length-2; i++)
    {
        int k = i;
        for(int j = i+1; j<=length -1; j++)
        {
            if(InputArray.at(j) < InputArray.at(k))
                k = j;
            if(k != i)
            {
                int tmp = InputArray.at(i);
                InputArray.at(i) = InputArray.at(i+1);
                InputArray.at(i+1) = tmp;
            }
        }
    }

}

void BubbleSort(std::vector<int>&InputArray)
{
    int i,j,k,length, index;
    int tmp;
    length = InputArray.size();
    k = length -2;
    do{
        index = 0;
        for(i = 0; i <= k;i ++)
        {

            if(InputArray.at(i) > InputArray.at(i+1) && InputArray.at(i+1) != -1)
            {
                tmp = InputArray.at(i);
                InputArray.at(i) = InputArray.at(i+1);
                InputArray.at(i+1) = tmp;
                index = i;
            }

        }
        k = index;

    }while(k!=0);
}
std::vector<int> sortByHeight(std::vector<int> InputArray) {
    int length = InputArray.size();
    for(int i = 0; i < length - 1; i ++)
    {
        for(int j = i + 1; j < length; j ++)
            if(InputArray.at(i) > InputArray.at(j) && InputArray.at(j) != -1)
            {
                int tmp = InputArray.at(i);
                InputArray.at(i) = InputArray.at(j);
                InputArray.at(j) = tmp;
            }
    }
    return InputArray;
}

int main()
{
    std::vector<int> a;
    std::vector<int> b;
    a.push_back(-1);
    a.push_back(150);
    a.push_back(190);
    a.push_back(170);
    a.push_back(-1);
    a.push_back(-1);
    a.push_back(160);
    a.push_back(180);
    a.push_back(-1);
    a.push_back(-1);
    //BubbleSort(a);
    InterchangeSort(a,b);
    //b = sortByHeight(a);
    cout << "Hello World!" << endl;
    return 0;
}
