#include <iostream>

using namespace std;
int sum(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    int number1 = 0, number2 = 0;
    cout<<"Insert number1: ";
    cin>>number1;

    cout<<"Insert number2: ";
    cin>>number2;

    cout << "sum of number1: "<<number1<< " and number2: "<<number2<<" is: "<<sum(number1,number2) << endl;
    return 0;
}
