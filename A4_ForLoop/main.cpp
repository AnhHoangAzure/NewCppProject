#include <iostream>

using namespace std;
string getNumberName(int n){
    string res= "";
    if(n == 1)
    {
        res = "one";
    }
    else if(n ==2){
        res = "two";
    }
    else if(n == 3)
    {
        res = "three";
    }
    else if(n ==4){
        res = "four";
    }else if(n == 5){
        res = "five";
    }else if(n == 6){
        res = "six";
    }else if(n == 7){
        res = "seven";
    }else if(n == 8){
        res = "eight";
    }else if(n == 9){
        res = "nine";
    }
    return res;
}
int main()
{
    int a, b;
     cin >> a;
    cin>>b;
    int i = 0;
    for(i = a; i <= b; i++)
    {
        if(i>=1 && i <=9)
        {
            cout<<getNumberName(i)<<endl;
        }
        else if(i>9)
        {
            if(i%2 == 0)
               cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        }
    }

    return 0;
}
