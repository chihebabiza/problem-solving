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

bool matrixTypical(int mat1[3][3], int mat2[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (mat1[i][j] != mat2[i][j])
                return false;
        }
        return true;
    }
}

void result(int mat1[3][3], int mat2[3][3])
{
    if (matrixTypical(mat1, mat2))
        cout << "Matrixes are typical";
    else
        cout << "Matrixes are not typical";
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3], mat2[3][3];
    fillMatrix(mat1, 1, 10);
    fillMatrix(mat2, 1, 10);
    printMatrix(mat1);
    printMatrix(mat2);
    result(mat1, mat1);
    return 0;
}
