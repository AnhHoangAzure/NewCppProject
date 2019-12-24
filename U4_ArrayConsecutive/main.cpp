#include <iostream>
#include<vector>
using namespace std;
int makeArrayConsecutive2(std::vector<int> statues){
    int length = statues.size();
    int max = statues.at(0);
    int min = statues.at(0);
    for (int i = 0 ; i < length; i++)
    {
        if(statues.at(i) >= max)
            max = statues.at(i);
        if(statues.at(i) <= min)
            min = statues.at(i);

    }
    return max - min + 1 - length;
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
