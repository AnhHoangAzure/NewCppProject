#include <iostream>

using namespace std;
/*
 * Encapsulation is a process of combining data members and functions in a single unit called class.
 * This is to prevent the access to the data directly,
 * the access to them is provided through the functions of the class.
 * It is one of the popular feature of Object Oriented Programming(OOPs) that helps in data hiding.
 *
 * How to make:
 * 1) Make all the data members private.
 * 2) Create public setter and getter functions for each data member in such a way
 * that the set function set the value of data member and get function get the value of data member.
 */
class ExampleEncap{
private:
    int num;
    char ch;
public:
    //Getter functions to get the value of data members.
    int getNum() const{
        return num;
    }
    char getCh() const{
        return ch;
    }
    //Setter functions, they are called for assigning the values to the private data members.

    void setNum(int num)
    {
        this->num = num;
    }
    void setCh(char ch){
        this->ch = ch;
    }
};
int main()
{
    ExampleEncap obj;
    obj.setCh(100);
    obj.setCh('A');

    cout << "Num: " <<obj.getNum()<< endl;
    cout << "Char: "<<obj.getCh()<<endl;
    return 0;
}
