#include <iostream>
#include <ctime>
using namespace std;

void printMatrix(int mat[3][3])
{
    printf("-------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%02d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------\n");
}

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fillMatrix(int mat[3][3], int min, int max)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout << "\n enter the value of [" << i << "][" << j << "] : ";
            // cin >> mat[i][j];
            mat[i][j] = RandomNumber(min, max);
        }
    }
}

bool matrixScalar(int mat1[3][3])
{
    short firstValue = mat1[0][0];
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (i == j && mat1[i][j] != firstValue)
                return false;
            else if (i != j && mat1[i][j] != 0)
                return false;
        }
        return true;
    }
}

void result(int mat1[3][3])
{
    if (matrixScalar(mat1))
        cout << "Matrix is scalar";
    else
        cout << "Matrix is not scalar";
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3] = {{8, 0, 0},
                      {0, 8, 0},
                      {0, 0, 8}};
    // int mat1[3][3];
    // fillMatrix(mat1, 1, 10);
    printMatrix(mat1);
    result(mat1);
    return 0;
}
