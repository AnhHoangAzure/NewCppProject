#include <iostream>

using namespace std;
//base class
class Parent
{
public:
    int id_p;
};
//Sub-class
class Child:public Parent
{
public:
    int id_c;
};
int main()
{
    Child obj;
    obj.id_p = 91;
    obj.id_c = 17;
    cout<<"Child id is >"<<obj.id_c<<endl;
    cout<<"Parent ip is "<<obj.id_p<<endl;
    return 0;
}
