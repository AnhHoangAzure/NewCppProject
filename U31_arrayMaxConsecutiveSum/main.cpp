#include <iostream>
#include <vector>
using namespace std;
int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {

    int length = inputArray.size();
    std::vector<int> sum;
    int s = 0;
    int j = 0;
    int index = 0;
    for (int i = 0 ; i < length - 1; i++)
    {
        s = 0;
        index = 0;
        j = 0;
        while(j < k)
        {

//            if( i+ j < length)
//                index = i+ j;
//            else
//            {
//                index = i+ j - length;
//            }
//            s = s + inputArray.at(index);
//            j++;
            if( i+ j < length )
            {
                index = i+ j;
                s = s + inputArray.at(index);

            }
            j++;
        }
        sum.push_back(s);
    }
    int max = sum.at(0);
    for(int i = 1 ; i < sum.size(); i++)
    {
        if(sum.at(i) > max)
            max = sum.at(i);
    }
    return max;
}
int main()
{
    std::vector<int> inputArray;
    inputArray.push_back(2);
    inputArray.push_back(3);
    inputArray.push_back(5);
    inputArray.push_back(1);
    inputArray.push_back(6);

    int res = arrayMaxConsecutiveSum(inputArray, 0);
    cout<<"Result: "<<res<<endl;
    return 0;
}
