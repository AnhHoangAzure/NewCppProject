#include <iostream>

using namespace std;
int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    int greaterValue = 0;
    int greaterWeight = 0;
    int lessValue = 0;
    int lessWeight = 0;
    if(maxW >= weight1 + weight2)
        return value1 + value2;
    else{
        if(weight1 > weight2)
        {
            greaterValue = value1;
            greaterWeight = weight1;
            lessValue = value2;
            lessWeight = weight2;
        }
        else{
            greaterValue = value2;
            greaterWeight = weight2;
            lessValue = value1;
            lessWeight = weight1;
        }
        if(maxW < lessWeight)
            return 0;
        else if(maxW >= lessWeight && maxW < greaterWeight)
                return lessValue;
        else
        {
            if(lessValue > greaterValue)
                return lessValue;
            else
                return greaterValue;
        }
    }
}
int main()
{
    cout << "Res = " << knapsackLight(2,5,3,4,5)<< endl;
    return 0;
}
