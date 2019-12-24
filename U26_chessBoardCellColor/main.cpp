#include <iostream>
#include <string>
using namespace std;
bool chessBoardCellColor(std::string cell1, std::string cell2) {
    int a[9][9] = {0};
    int i = 1, j = 1;
    int indexC11 = 0, indexC12 = 0, indexC21 = 0, indexC22 = 0;
    bool result = false;
    for(i = 1; i < 9; i++)
    {
        for(j = 1; j < 9; j++)
        {
            if(i%2 == 0)
            {
                if(j %2 == 1)
                    a[i][j] = 0;
                else
                    a[i][j] = 1;
            }
            else
            {
                if(j %2 == 1)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        }
    }
    if(cell1.size() != 2 || cell2.size()!= 2)
        return false;
    else{
        indexC11 = cell1[0] - 'A' + 1;
        indexC21 = cell2[0] - 'A' + 1;
        indexC12 = cell1[1] - '0';
        indexC22 = cell2[1] - '0';
    }
    if(a[indexC11][indexC12] == a[indexC21][indexC22])
        result = true;
    else
        result = false;

    return result;

}

int main()
{
    std::string cell1 = "A1";
    std::string cell2 = "H3";
    bool res = chessBoardCellColor(cell1,cell2);
    cout << "Result :" <<res<< endl;
    return 0;
}
