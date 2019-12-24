#include <iostream>
#include <vector>
using namespace std;
int firstDuplicate(std::vector<int> a) {
    std::vector<int> distance;
    std::vector<int> tmp = a;
    int length = a.size();
    for(int i = 0; i < length; i++)
    {
        distance.push_back(-1);
        for(int j = i + 1 ; j < length; j ++)
        {
            if(a[j] == a[i])
            {
                int tmp = j - i;
                distance.at(i) = tmp;
                a.at(i) = -1;
            }
        }
    }
    int min = distance.at(0);
    int index = 0;
    bool isExist = false;
    for(int i = 0; i < length; i ++)
    {
        if(distance.at(i) > -1 && isExist == false)
        {
            min = distance.at(i);
            index = i;
            isExist = true;
        }
        if(distance.at(i) < min && distance.at(i) > -1)
        {
            min = distance.at(i);
            index = i;
        }
    }
    if(isExist == false)
        return -1;
    else
        return tmp.at(index);
}

int main()
{
    std::vector<int> a;
    a.push_back(8);
    a.push_back(1);
    a.push_back(4);
    a.push_back(8);
    a.push_back(10);
    a.push_back(1);
    a.push_back(5);
    a.push_back(7);
    a.push_back(8);
    a.push_back(7);

    int res = firstDuplicate(a);

    cout << "Result: "<<res << endl;
    return 0;
}
