#include <iostream>
#include <vector>
using namespace std;
std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
    std::vector<std::vector<int>> result;
    int length = a.size();
    int i = length - 1;
    int j = 0;
    std::vector<int> res_row;
    bool isRowDone = false;
    bool isColDone = false;
    while(true)
    {
        if(i >=0 && !isRowDone)
        {
            int tmp = a.at(i).at(j);
            i--;
            res_row.push_back(tmp);
            isRowDone = false;
        }

        if(i < 0)
        {
            result.push_back(res_row);
            res_row.clear();
            i = length - 1;
            j++;
        }
        if(j > length - 1)
        {
             break;
        }
    }
    return result;
}

int main()
{
    std::vector<std::vector<int>> a, res;
    std::vector<int> tmp;
    tmp.push_back(1);
    tmp.push_back(2);
    tmp.push_back(3);
    a.push_back(tmp);
    tmp.clear();

    tmp.push_back(4);
    tmp.push_back(5);
    tmp.push_back(6);
    a.push_back(tmp);
    tmp.clear();

    tmp.push_back(7);
    tmp.push_back(8);
    tmp.push_back(9);
    a.push_back(tmp);
    tmp.clear();

    res = rotateImage(a);
    cout << "Hello World!" << endl;
    return 0;
}
