#include <iostream>

using namespace std;

/*
 *  Initialization in constructors
 *  When a constructor is used to initialize other members,
 *  these other members can be initialized directly,
 *  without resorting to statements in its body.
 *  This is done by inserting,
 *  before the constructor's body, a colon (:) and
 *  a list of initializations for class members.
 *  For example, consider a class with the following declaration:
*/
//Rectangle (int x, int y) { width=x; height=y; }
//Rectangle (int x, int y) : width(x) { height=y; }
//Rectangle::Rectangle (int x, int y) : width(x), height(y) { }

class Circle{
    double radius;
public:
    Circle(double r) : radius(r){}
    double area(){
        return radius;
    }
};
class Cylinder{
    Circle base;
    double height;
public:
    Cylinder(double r, double h):base(r), height(h){}
    double volume() {return base.area() * height;}
};
int main()
{
    Cylinder foo(10, 20);
    cout<<"Foo's volume: "<<foo.volume()<<endl;
    return 0;
}
