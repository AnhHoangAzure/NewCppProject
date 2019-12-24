#include <iostream>
#include <vector>
using namespace std;
int generalizedGCD(int num, int* arr)
{
    // WRITE YOUR CODE HERE
    int res = 1;
    while(true){
        bool isCD = false;
        bool isStop = false;
        for(int i = 0 ; i < num; i++)
        {
            int tmp = *(arr+i);
            if(tmp < res)
            {
                isStop = true;
                isCD = false;
                break;
            }
            if(tmp%res == 0){
                isCD = true;
                isStop = false;
            }
            else{
                isCD = false;
                isStop = false;
                break;
            }
        }
        if(isCD == true && isStop == false)
            res++;
        else if(isCD == false && isStop == false)
        {
           res++;
        }
        else
            res--;

    }
    return res;
}
// FUNCTION SIGNATURE ENDS
int main()
{
    int array[5] = {20,8,4,8,8};
    int num  = 5;
    int res =     generalizedGCD(num, array);
    cout << "Result: "<<res;
    return 0;
}
