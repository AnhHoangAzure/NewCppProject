#include <iostream>
#include <vector>
using namespace std;
bool areSimilar(std::vector<int> a, std::vector<int> b) {

    int length = a.size();
    int tmp = 0;
    int index1 = 0, index2= 0, count = 0;
    bool res = false;
    for(int i = 0; i < length; i++){
        tmp = abs(a.at(i) - b.at(i));
        if(tmp != 0)
        {
            count++;
            if(count == 1)
            {
                index1 = i;
            }
            else if(count == 2)
            {
                index2 = i;
            }
            else
            {
                break;
                return false;
            }
        }
        else
            res == true;
    }
    if(count == 2 || count == 0)
    {
        int tmp2 = b.at(index1);
        b.at(index1) = b.at(index2);
        b.at(index2) = tmp2;

        if(b.at(index1) == a.at(index1) && b.at(index2) == a.at(index2))
            return true;
        else
            return false;
    }
    return res;
}

int main()
{
    std::vector<int> a;
    std::vector<int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    b.push_back(2);
    b.push_back(1);
    b.push_back(3);
    bool result = areSimilar(a,b);
    cout << "Hello World! Result "<<result << endl;
    return 0;
}
