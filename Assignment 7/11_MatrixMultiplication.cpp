#include <iostream>
using namespace std;

void multiplication(int A[][3], int B[][3], int rows, int col)
{

    int c[3][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < rows; k++)
            {
                c[i][j] += A[i][k] * B[k][i];
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << c[i][j] << " ";
        }
    }
}

int main()
{

    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int B[3][3] = {{1, 0, 0},
                   {0, 1, 0},
                   {0, 0, 1}};

    int rows = 3;
    int col = 3;

    multiplication(A, B, rows, col);

    return 0;
}
