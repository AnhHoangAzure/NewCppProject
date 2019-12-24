#include <iostream>

using namespace std;
template<class T>
void Sum(T x, T y){
    cout << "Sum of number1 ="<<x <<"number2: " <<y <<" is : " <<x+y<<endl;

}
int main()
{
    double number1Double = 0;
    double number2Double = 0;

    float number1Float = 0;
    float number2Float = 0;

    cout<<"Insert number1(double): "<<endl;
    cin>>number1Double;
    cout<<"Insert number2(double): "<<endl;
    cin>>number2Double;


    Sum(number1Double,number2Double);

    cout<<"Insert number1(float): "<<endl;
    cin>>number1Float;
    cout<<"Insert number2(float): "<<endl;
    cin>>number2Float;
    Sum(number1Float,number2Float);
    return 0;
}
