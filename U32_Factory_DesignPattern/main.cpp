#include <iostream>
#include "toyfactory.cpp"
using namespace std;

int main()
{
    // client code starts
        int type;
        while(1){
            cout << endl << "Enter type or Zero for exit" << endl;
            cin >> type;
            if(!type)
                break;
            Toy *v = ToyFactory::createToy(type);
            if(v){
                v->showProduct();
                delete v;
            }
        }
        cout << "Exit.." << endl;
    // client code ends
        return 0;
    }
