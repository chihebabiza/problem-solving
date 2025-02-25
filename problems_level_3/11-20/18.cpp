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

bool NumberExsitInMatrix(int mat[3][3], short number)
{
    bool isExist = false;
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (mat[i][j] == number)
                return true;
        }
    }
    return false;
}

void printResult(int mat1[3][3], int mat2[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (NumberExsitInMatrix(mat2, mat1[i][j]))
                cout << mat1[i][j] << "\t";
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3], mat2[3][3];
    fillMatrix(mat1, 1, 10);
    fillMatrix(mat2, 1, 10);
    printMatrix(mat1);
    printMatrix(mat2);
    printResult(mat1, mat2);
    return 0;
}
