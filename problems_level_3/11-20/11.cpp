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
            mat[i][j] = RandomNumber(min, max);
        }
    }
}

int matrixSum(int mat[3][3])
{
    short sum = 0;
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            sum += mat[i][j];
        }
    }
    return sum;
}

bool matrixEquality(int mat1[3][3], int mat2[3][3])
{
    return (matrixSum(mat1) == matrixSum(mat2));
}

void result(int mat1[3][3], int mat2[3][3])
{
    if (matrixEquality(mat1, mat2))
        cout << "Matrixes are equal";
    else
        cout << "Matrixes are not equal";
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3], mat2[3][3];
    fillMatrix(mat1, 1, 10);
    fillMatrix(mat2, 1, 10);
    printMatrix(mat1);
    printMatrix(mat2);
    result(mat1,mat2);
    return 0;
}
