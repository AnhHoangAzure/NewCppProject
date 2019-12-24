#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class Car{
private:
    int speed;
    char mark[20];
    float price;
public:
    Car(int speedIn = 0, char markIn[] = "", float priceIn = 0);
    void show();
};
Car::Car(int speedIn, char markIn[], float priceIn){
    speed = speedIn;
    strcpy(mark,markIn);
    price = priceIn;
}
void Car::show(){
    cout <<"This is a "<< mark << " having a speed of: "<< speed
        << "km/h and its price is : "<<price<<endl;
    return;
}
int main()
{
    Car *myCar = new Car(150, "Hyundai",120000);
    cout<<"Car instruction:"<<endl;
    myCar->show();
    delete myCar;//Destroy the pointer to avoid memory leak
    cout << "Hello World!" << endl;
    return 0;
}
