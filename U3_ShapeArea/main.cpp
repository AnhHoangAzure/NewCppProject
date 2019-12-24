#include <iostream>
#include <math.h>
using namespace std;
int shapeArea(int n) {
    int result = 1;
    if(n == 1)
        return 1;
    else
    {
        for (int i = 0; i < n; i ++)
            result = result + 2*2*i;
    }
    cout <<"Result: "<<result<<endl;
    return result;
}

int main()
{
    int resul = shapeArea(3);
    return 0;
}
