#include <iostream>
using namespace std;
int main()
{
    int A[3][4] = {{3, 4, 7, 6}, {1, 7, 6, 3}, {3, 8, 2, 1}};

    int *B[2];
    B[0] = new int[2];
    B[1] = new int[2];

    int **c;
    c = new int *[3];
    c[0] = new int[2];
    c[1] = new int[2];
    c[2] = new int[2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
