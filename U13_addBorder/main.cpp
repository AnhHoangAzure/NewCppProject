#include <iostream>
#include <vector>
using namespace std;
std::vector<std::string> addBorder(std::vector<std::string> picture) {
    int height = picture.size() + 2;
    int width = picture.at(0).length() + 2;
    string boderStr = "";
    for(int j = 0; j < width; j++)
    {
        boderStr = boderStr + '*';
    }
    std::vector<std::string> result;
    for(int i = 0; i < height; i++)
    {
        string tmp = "";
        if(i == 0)
        {
            result.push_back(boderStr.c_str());
        }
        else if(i >=0 && i < height -1)
        {
            tmp = "*" + picture.at(i-1) + "*";
            result.push_back(tmp.c_str());
        }
        else
        {
            result.push_back(boderStr.c_str());
        }
    }
    return result;
}

int main()
{
    std::vector<std::string> picture, result;
    std::string tmp = "a";
    picture.push_back(tmp);
    result = addBorder(picture);
    cout << "Hello World!" << endl;
    return 0;
}
