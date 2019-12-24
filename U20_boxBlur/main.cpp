#include <iostream>
#include <vector>
using namespace std;
std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    int x = image[0].size() - 2;
    int y = image.size() - 2;
    vector< vector <int>> b;

    for(int i = 0;i < y;i++){
        vector<int> a(x);
        for(int j = 0;j < x;j++){
            a[j] = image[i][j] + image[i][j+1] + image[i][j+2] +
                      image[i+1][j] + image[i+1][j+1] + image[i+1][j+2] +
                      image[i+2][j] + image[i+2][j+1] + image[i+2][j+2];
            a[j] /= 9;
        }
        b.push_back(a);
    }
    return b;
}

int main()
{
    std::vector<std::vector<int>> input;
    std::vector<std::vector<int>> result;
    std::vector<int> row1, row2, row3, row4;
    row1.push_back(7);
    row1.push_back(4);
    row1.push_back(0);
    row1.push_back(1);
    input.push_back(row1);

    row2.push_back(5);
    row2.push_back(6);
    row2.push_back(2);
    row2.push_back(2);
    input.push_back(row2);

    row3.push_back(6);
    row3.push_back(10);
    row3.push_back(7);
    row3.push_back(8);
    input.push_back(row3);

    row4.push_back(1);
    row4.push_back(4);
    row4.push_back(2);
    row4.push_back(0);
    input.push_back(row4);


    result = boxBlur(input);
    cout << "Hello World!" << endl;
    return 0;
}
