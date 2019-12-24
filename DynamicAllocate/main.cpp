#include <iostream>

using namespace std;
class Rectangle{
    int width;
    int height;
public:
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

    Rectangle(int x, int y):width(x), height(y){}

    int area(void){
        return width * height;
    }

};
int main()
{
    Rectangle object(3,4);
    Rectangle *foo,*bar,*baz;
    foo = &object;
    bar = new Rectangle(5,6);
    baz = new Rectangle[2] {{2,5}, {3,6}};
    cout<<"Object's area: "<<object.area()<<endl;

    cout<<"*foo's area: "<<foo->area()<<endl;

    cout<<"*bar's area: "<<bar->area()<<endl;

    cout<<"baz[0]'s area: "<<baz[0].area()<<endl;
    cout<<"baz[1]'s area: "<<baz[1].area()<<endl;

    //Free memory after allocation
    delete[] baz;
    delete bar;

    return 0;
}
