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

bool matrixIdentity(int mat1[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (i == j && mat1[i][j] != 1)
                return false;
            else if (i != j && mat1[i][j] != 0)
                return false;
        }
        return true;
    }
}

void result(int mat1[3][3])
{
    if (matrixIdentity(mat1))
        cout << "Matrix is identity";
    else
        cout << "Matrix is not identity";
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3] = { {1, 0, 0},
                       {0, 1, 0},
                       {0, 0, 1} };
    // fillMatrix(mat1, 1, 10);
    printMatrix(mat1);
    result(mat1);
    return 0;
}
