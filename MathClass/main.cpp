#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class Math{
private:
    int number1;
    int number2;

    string number1Str;
    string number2Str;

public:
    Math();
    Math(int num1,int num2);
    int SumFunc();
    int DifFunc();

    string SumString(string str1, string str2);

    int getNumber1(){return number1;}
    int getNumber2(){return number2;}

    void setNumber1(int num1){
        number1 = num1;
    }
    void setNumber2(int num2){
        number2 = num2;
    }
};
Math::Math()
{
    number1 = 0;
    number2 = 0;
}

Math::Math(int num1,int num2)
{
    number1 = num1;
    number2 = num2;
}

int Math::SumFunc()
{
    int num1 = getNumber1();
    int num2 = getNumber2();
    return num1+num2;
}
int Math::DifFunc()
{
    int num1 = getNumber1();
    int num2 = getNumber2();
    return num1-num2;
}

string Math::SumString(string str1, string str2)
{
    int longStrSize = 0;
    int sortStrSize = 0;
    int i = 0, j = 0;
    string longStr = "";
    string sortStr = "";
    string output = "";

    if(str1.size() > str2.size())
    {
        longStr = str1;
        sortStr = str2;
    }
    else
    {
        longStr = str2;
        sortStr = str1;
    }
    longStrSize = longStr.size();
    sortStrSize = sortStr.size();
    i = longStrSize -1;
    j = sortStrSize - 1;
    int add = 0, tmpSum = 0;
    vector<int> result;
    while(i > -1)
    {
        //init
        int tmpLongChar = 0, tmpSortChar = 0;
        //convert each char to int from Right to LEft
        if(j > -1)
        {
            tmpLongChar = longStr[i] - '0';
            tmpSortChar = sortStr[j] - '0';
            tmpSum = (tmpLongChar + tmpSortChar + add)%10;
        }
        else{
            tmpLongChar = longStr[i] - '0';
            tmpSum = (tmpLongChar + add)%10;
            tmpSortChar = 0;
        }

        if(tmpLongChar + tmpSortChar + add > 9)
            add = 1;
        else
            add = 0;

        result.push_back(tmpSum);
        tmpSum = 0;
        i--;
        if(i == -1 && add == 1)
        {
            result.push_back(1);
        }
        j--;
    }
    int ch;
    for ( int k = result.size() - 1; k > -1; k--) {
        ch = result.at(k);
        output += std::to_string(ch);

    }
    return output;

}
int main()
{
    Math *ptr;
    ptr = new Math();
    string number1 = "0",number2 = "0", output= "0";
    cout<<"Insert number1: ";
    cin>>number1;


    cout<<"Insert number2: ";
    cin>>number2;

    output = ptr->SumString(number1,number2);
    cout<<"Number1: "<<number1<<" and number2: "<<number2<<" AND "<< "SUM: " <<output<<endl;

    delete ptr;
    return 0;
}


