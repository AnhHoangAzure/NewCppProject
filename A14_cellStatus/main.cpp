#include <iostream>
#include <vector>
using namespace std;
// INCLUDE HEADER FILES NEEDED BY YOUR PROGRAM
// SOME LIBRARY FUNCTIONALITY MAY BE RESTRICTED
// DEFINE ANY FUNCTION NEEDED
// FUNCTION SIGNATURE BEGINS, THIS FUNCTION IS REQUIRED
vector<int> cellCompete(int* states, int days)
{
    // WRITE YOUR CODE HERE
    int tmp_cell[10] = {0};
    int cell[8] = {0};
    int i = 0;
    vector<int> res;
    for(i = 0; i < 8; i++){
        tmp_cell[i+1] = states[i];
    }
    int day = 0;
    while(day < days)
    {
        for(i = 1; i < 9; i++){
            if(tmp_cell[i-1] != tmp_cell[i+1])
                cell[i-1] = 1;
            else
                cell[i-1] = 0;
        }
        for(i = 1; i < 9; i++){
            tmp_cell[i] =cell[i-1];
        }
        day++;
    }
    for(i = 0 ; i < 8 ; i ++)
    {
        res.push_back(tmp_cell[i+1]);
    }
    return res;

}
// FUNCTION SIGNATURE ENDS
int main()
{
    int array[8] = {1,1,1,0,1,1,1,1};
    int days  = 2;

    vector<int> res = cellCompete(array, days);
    for(int i = 0 ; i < res.size(); i++)
        cout<<res[i] + " ";
    return 0;
}
