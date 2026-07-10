#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool validSudoku(vector<vector<char>> board)
    {
        bool boxseen[9][9] = {false};
        bool colseen[9][9] = {false};
        bool rowseen[9][9] = {false};
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                int nums = board[i][j] - '1';
                int boxindex = (i / 3) * 3 + (j / 3);
                if (boxseen[boxindex][nums] || colseen[j][nums] || rowseen[i][nums])
                    return false;
                boxseen[boxindex][nums] = true;
                colseen[j][nums] = true;
                rowseen[i][nums] = true;
            }
        }
        return true;
    }
};

int main()
{
    solution sol;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << (sol.validSudoku(board) ? "Valid" : "Invalid") << endl;
}