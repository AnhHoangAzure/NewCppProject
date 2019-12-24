#include <iostream>
#include <vector>

using namespace std;
int linearSearch(std::vector<int> ArrayInt, int findingValue)
{
    int length = ArrayInt.size();
    for (int i = 0; i < length; i++)
    {
        if(findingValue == ArrayInt.at(i))
            return i;
    }
    return NULL;
}
int binarySearch(std::vector<int> ArrayInt, int findingValue)
{
    int lowerBound = 0;
    int upperBound = ArrayInt.size();
    while(lowerBound<upperBound)
    {
        int midIndex = lowerBound + (upperBound - lowerBound)/2;
        if(ArrayInt.at(midIndex) == findingValue)
            return midIndex;
        else if(ArrayInt.at(midIndex) < findingValue)
            lowerBound = midIndex + 1;
        else
            upperBound = midIndex;
    }
    return NULL;
}
int interpolationSearch(std::vector<int>ArrayInt, int findingValue){
    int midIndex, lowerBound = 0, higherBound = ArrayInt.size() -1;
    while((ArrayInt.at(higherBound) != ArrayInt.at(lowerBound)) && (findingValue >= ArrayInt.at(lowerBound)) && (findingValue <= ArrayInt.at(higherBound)) )
    {
        midIndex = lowerBound + (findingValue - ArrayInt.at(lowerBound)) * (higherBound - lowerBound)/(ArrayInt.at(higherBound) - ArrayInt.at(lowerBound));
        if(ArrayInt.at(midIndex) < findingValue)
            lowerBound = midIndex + 1;
        else if(ArrayInt.at(midIndex) > findingValue)
            higherBound = midIndex -1;
        else
            return midIndex;
    }
    if(findingValue == ArrayInt.at(lowerBound))
        return lowerBound;
    else
        return NULL;
}
int main()
{
    int result;
    std::vector<int> mArray;
    mArray.push_back(10);
    mArray.push_back(14);
    mArray.push_back(19);
    mArray.push_back(26);
    mArray.push_back(27);
    mArray.push_back(31);
    mArray.push_back(33);
    mArray.push_back(35);
    mArray.push_back(42);
    mArray.push_back(44);

    result = binarySearch(mArray, 31);
    if(result!= NULL)
    {
        cout<<"Found the position: "<<result<<endl;
    }
    else
        cout<<"Could not find the number";
}
