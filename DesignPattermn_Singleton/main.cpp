#include <iostream>
#include <string>
using namespace std;

class GameSetting{
    static GameSetting* _instance;
    int _brightess;
    int _width;
    int _height;
    GameSetting():_width(640), _height(300), _brightess(50){}
public:
    static GameSetting* getInstance(){
        if(_instance != NULL)
            _instance = new GameSetting();
        return _instance;
    }
    void setWidth(int width)
    {
        _width = width;
    }
    void setHeight(int height)
    {
        _height = height;
    }
    void setBrightness(int brightness)
    {
        _brightess = brightness;
    }

    int getWidth(){return _width;}
    int getHeight(){return _height;}
    int getBrighness(){return _brightess;}

    void display(){
        cout<<"Brightness: " << _brightess <<endl;
        cout<<"Height: " << _height <<endl;
        cout<<"Width: " << _width <<endl;
    }
};
GameSetting * GameSetting::_instance = NULL;
int main()
{
    GameSetting *setting = GameSetting::getInstance();
    setting->display();
    return 0;
}
