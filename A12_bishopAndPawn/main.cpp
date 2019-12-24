#include <iostream>
#include <string>
using namespace std;
bool bishopAndPawn(std::string bishop, std::string pawn) {
    int board[8][8] ={0};
    int bishop_horizontall = 0 , bishop_vertical = 0;
    int pawn_horizontall = 0 , pawn_vertical = 0;
    bishop_horizontall = bishop[0] - 49 - 48;
    bishop_vertical = (int)bishop.at(1) - 49;
    bool res = false;
    pawn_horizontall = pawn[0] - 49 - 48;
    pawn_vertical = (int)pawn.at(1) - 49;

    for(int i = 0 ; i < 8; i ++)
    {
        for(int j = 0 ; j < 8; j ++)
        {
            if(abs(i - bishop_vertical) == abs(j - bishop_horizontall))
                board[i][j] = 1;
        }
    }
    for(int i = 0 ; i < 8; i ++)
    {
        for(int j = 0 ; j < 8; j ++){
            if(pawn_vertical == i && pawn_horizontall == j && board[i][j] == 1)
            {
                res = true;
                break;
            }
            else{
                res = false;
            }
        }
        if(res == true)
            break;
    }
    return res;
}

int main()
{
    cout << "Result: "<<bishopAndPawn("h1", "h3") << endl;
    return 0;
}
