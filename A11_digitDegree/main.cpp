#include <iostream>

using namespace std;
int process(int n) {
    int new_n = 0;
    int tmp = 0;
    while(true)
    {
        if(n/10 > 0){
            tmp = n%10;
            n = n/10;
            new_n +=tmp;
        }
        else {
            new_n +=n;
            break;
        }
    }
    return new_n;
}
int digitDegree(int n) {
    int res = 0;
    while(n>=10){
        n = process(n);
        res++;
    }
    return res;
}

int main()
{
    cout << "output = "<<digitDegree(91)<< endl;
    return 0;
}
