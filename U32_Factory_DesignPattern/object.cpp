#include<iostream>
#include<string>
using namespace std;
class Toy{
protected:
    string name;
    float price;
public:
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel() = 0;
    virtual void showProduct() = 0;
};
class Car : public Toy{
public:
    void prepareParts(){
        cout<< "Prepare Car parts"<<endl;
    }
    void combineParts(){
        cout<< "Combine Car Parts"<<endl;
    }
    void assembleParts(){
        cout<< "Assembling Car Parts"<<endl;
    }
    void applyLabel(){
        cout<<"Applying Car label: "<< endl;
        name = "Car";
        price = 10;
    }
    void showProduct(){
        cout << "Name: " << name << endl << "Price: " << price << endl;
    }
};
class Bike: public Toy{
public:
    void prepareParts(){
        cout<<"PreparingBike Parts"<<endl;
    }
    void combineParts(){
        cout<<"Combining Bike parts "<<endl;
    }
    void assembleParts(){
        cout<<"Assembling Bike parts "<<endl;
    }
    void applyLabel()      {
        cout << "Applying Bike Label" << endl;  name = "Bike"; price = 20;
    }
    void showProduct () {
        cout << "Name: " << name << endl << "Price: " << price << endl;
    }
};
class Plane : public Toy {
    // make all constructor private or protected!!
public:
    void prepareParts()  { cout << "Preparing Plane Parts" << endl;}
    void combineParts()  { cout << "Combining Plane Parts" << endl;}
    void assembleParts() { cout << "Assembling Plane Parts" << endl;}
    void applyLabel()      { cout << "Applying Plane Label" << endl;  name = "Plane"; price = 30;}
    void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};
