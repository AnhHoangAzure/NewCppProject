#include <iostream>
#include <string>

using namespace std;
class Car{
    int speed;
    float price;
public:
    Car();
    Car(int s, float p);
    void show(){
        cout << "Speed: "<< getSpeed()<<endl;
        cout << "Price: "<< getPrice()<<endl;
    }
    float getSpeed(){return speed;}
    float getPrice(){return price;}
    void setSpeed(int s){
        speed = s;
    }
    void setPrice(float p){
        price = p;
    }
};
Car::Car(){
    speed = 0;
    //strcpy(mark,"");
    price = 0;
}
Car::Car(int s, float p):speed(s),price(p){}
int main()
{
    Car *mCar;
    Car staticObj;
    staticObj.setSpeed( 3000 );
    staticObj.setPrice (400);

    mCar = new Car(100,1000);
    mCar->show();

    staticObj.show();

    delete mCar;
    return 0;
}
