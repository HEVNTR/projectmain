#include <iostream>
#define N 9
using namespace std;
int grid[N][N] = {{5, 3, 0, 0, 7, 0, 0, 0, 0},
                  {6, 0, 0, 1, 9, 5, 0, 0, 0},
                  {0, 9, 8, 0, 0, 0, 0, 6, 0},
                  {8, 0, 0, 0, 6, 0, 0, 0, 3},
                  {4, 0, 0, 8, 0, 3, 0, 0, 1},
                  {7, 0, 0, 0, 2, 0, 0, 0, 6},
                  {0, 6, 0, 0, 0, 0, 2, 8, 0},
                  {0, 0, 0, 4, 1, 9, 0, 0, 0},
                  {0, 0, 0, 0, 8, 0, 0, 7, 9}};
bool isPresentInCol(int col, int num)
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool isPresentInRow(int row, int num)
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}
bool isPresentInBox(int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow][col + boxStartCol] == num)
                return true;
    return false;
}
void sudokuGrid()
{
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            if (col == 3 || col == 6)
                cout << " | ";
            cout << grid[row][col] << " ";
        }
        if (row == 2 || row == 5)
        {
            cout << endl;
            for (int i = 0; i < N; i++)
                cout << "---";
        }
        cout << endl;
    }
}
