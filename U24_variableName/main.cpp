#include <iostream>
#include <string.h>
using namespace std;
bool variableName(std::string name) {

    bool result = true;
    int nameLength = name.size();
    int i = 0;
    while (true) {
        if(std::isdigit(name[0]))
        {
            result = false;
            break;
        }
        if((name[i] >= 'A' && name[i] <= 'Z' )||
                (name[i] >= 'a' && name[i] <= 'z' ) ||
                (name[i] >= '0' && name[i] <= '9' )||
                (name[i] == '_'))
        {
            result = true;
        }
        else
        {
            result = false;
            break;
        }

        if(name[i] == '-')
        {
            result = false;
            break;
        }

        i++;
        if(i == nameLength)
            break;
    }
    return result;

}

int main()
{
    std::string name = "1svc";
    bool res = variableName(name);
    cout << "res" << res<<endl;
    return 0;
}
