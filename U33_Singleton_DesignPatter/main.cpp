#include <iostream>
#include <string>

using namespace std;

class GameSetting{
    static GameSetting* _instance;
    int _brightness;
    int _width;
    int _height;
    GameSetting() : _width(786), _height(1300), _brightness(75){}
public:
    static GameSetting* getInstance(){
        if(_instance == NULL)
            _instance = new GameSetting();
        return _instance;
    }
    void setWidth(int width) {_width = width;}
    void setHeigth(int height) {_height = height;}
    void setBrightness(int brightness) {_brightness = brightness;}

    int getWidth() {return _width;}
    int getHeigth() {return _height;}
    int getBrightness() {return _brightness;}

    void displaySetting() {
        cout << "brightness: " << _brightness << endl;
        cout << "height: " << _height << endl;
        cout << "width: " << _width << endl << endl;
    }
};
GameSetting * GameSetting::_instance = NULL;
void someFunc(){
    GameSetting *setting = GameSetting::getInstance();
    setting->displaySetting();
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
