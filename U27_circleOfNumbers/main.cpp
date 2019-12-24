#include <iostream>

using namespace std;
int depositProfit(int deposit, int rate, int threshold) {

    double profit = deposit;
    int res = 0;
    if(deposit > threshold)
        return 0;
    while(true){
        profit = profit *(100 + rate)/100;
        res++;
        if(profit >= threshold)
            break;
        if(res >= 6)
        {
            res = 6;
            break;
        }

    }
    return res;
}


int main()
{
    int result = depositProfit(20, 20, 50);

    cout << "result: " <<result<< endl;
    return 0;
}
