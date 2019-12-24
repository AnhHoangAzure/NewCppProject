#include <iostream>
#include <vector>
using namespace std;
std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    std::vector<std::vector<int>> output;
    std::vector<std::vector<int>> matrixExtend;
    int lengthColMatrix = matrix.at(0).size();
    int lengthRowMatrix = matrix.size();
    int lengthColExtend = lengthColMatrix + 2;
    int lengthRowExtend = lengthRowMatrix + 2;
    int i = 0, j = 0;
    std::vector<int>rowItem(lengthColExtend, 0);
    std::vector<int>rowOutput(lengthColMatrix, 0);
    for (i = 0; i < lengthRowExtend; i++)
    {
        matrixExtend.push_back(rowItem);
        if(i < lengthRowMatrix)
            output.push_back(rowOutput);
    }
    for (i = 0; i < lengthRowMatrix; i++)
    {
        for(j = 0; j< lengthColMatrix; j++)
        {
            if(matrix.at(i).at(j) == true)
            {
                matrixExtend.at(i+1).at(j+1) = 1;

            }
        }
    }

    for(i = 1; i< lengthRowExtend - 1; i ++)
    {
        for(j = 1; j < lengthColExtend -1; j++)
        {
            int tmp = matrixExtend.at(i - 1).at(j - 1) + matrixExtend.at(i - 1).at(j) + matrixExtend.at(i - 1).at(j + 1) +
                      matrixExtend.at(i).at(j - 1)                                    + matrixExtend.at(i).at(j + 1) +
                      matrixExtend.at(i + 1).at(j - 1) + matrixExtend.at(i + 1).at(j) + matrixExtend.at(i + 1).at(j + 1);
            output.at(i - 1).at(j - 1) = tmp;
        }
    }
    return output;

}

int main()
{
    std::vector<std::vector<bool>> matrix;
    std::vector<std::vector<int>> res;
    std::vector<bool> tmp;

    tmp.push_back(true);
    tmp.push_back(false);
    tmp.push_back(false);
    matrix.push_back(tmp);
    tmp.clear();

    tmp.push_back(false);
    tmp.push_back(true);
    tmp.push_back(false);
    matrix.push_back(tmp);
    tmp.clear();

    tmp.push_back(false);
    tmp.push_back(false);
    tmp.push_back(false);
    matrix.push_back(tmp);

   res =  minesweeper(matrix);

    cout << "Hello World!" << endl;
    return 0;
}
