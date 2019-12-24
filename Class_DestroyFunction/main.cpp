#include <iostream>
#include <stdint.h>
#include <string>

using namespace std;
class Car{
private:
    int speed;
    char *mark;
    float price;
public:
    Car(int speedIn = 0, char *markIn = NULL, float priceIn = 0);
    void show();
    ~Car();
};
Car::Car(int speedIn, char *markIn, float priceIn){
    speed = speedIn;
    mark = markIn;
    price = priceIn;
}
void Car::show(){
    cout <<"This is a " << *mark << " having a speed of " << speed << " with a price is " << price<< endl;
    return;
}
Car::~Car(){
    delete [] mark;
    cout <<"Object has been destroyed"<<endl;
}
int main()
{
    Car myCar(150, "Mescedes", 5000);// Dùng hàm khởi tạo đủ tham số
          // Giới thiệu xe
    cout << "Gioi thieu xe: " << endl;
    myCar.show();
    return 0;
    //Ham huy se tu dong dc GOI va : TU DONG HUY
    //Nói chung, khi có ít nhất một trong các thuộc tính của lớp là con trỏ,
    //thì nên dùng hàm hủy bỏ tường minh để giải phóng triệt để các vùng nhớ của các thuộc tính,
    //trước khi đối tượng bị giải phóng khỏi bộ nhớ.
}
