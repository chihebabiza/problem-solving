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

void fillMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = RandomNumber(1, 100);
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

int main()
{
    srand((unsigned)time(NULL));
    int mat[3][3];
    fillMatrix(mat);
    printMatrix(mat);
    cout << "Sum of matrix is : " << matrixSum(mat);
    return 0;
}
