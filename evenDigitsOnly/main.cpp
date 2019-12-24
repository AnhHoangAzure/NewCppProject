#include <iostream>
#include <vector>
using namespace std;
bool evenDigitsOnly(int n) {
    bool result = true;
    int tmp = 0;
    while(true)
    {
        int extra = 0;
        tmp = n/10;
        extra = n%10;
        if(extra %2 == 0)
            result = true;
        else
        {
            result = false;
            break;
        }
        if(tmp == 0)
            break;
        else
            n = tmp;
    }
    return result;
}

int main()
{
    bool res = false;
    res = evenDigitsOnly(21);
    cout << "Result :" <<res<< endl;
    return 0;
}
