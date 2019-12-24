#include <iostream>
#include <vector>
using namespace std;
std::vector<int> alternatingSums(std::vector<int> a) {
    std::vector<int> result;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < a.size(); i ++)
    {
        if(i%2 == 0)
            sum1 = sum1 + a.at(i);
        else
            sum2 = sum2 + a.at(i);
    }
    result.push_back(sum1);
    result.push_back(sum2);

    return result;
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
