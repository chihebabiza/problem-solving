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

bool MatrixisPalindrom(int mat[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3 / 2; j++)
        {
            if (mat[i][j] != mat[i][3 - 1 - j])
                return false;
        }
    }
    return true;
}

void printResult(int mat1[3][3])
{
    if (MatrixisPalindrom(mat1))
        cout << "Matrix is palindrom\n";
    else
        cout << "Matrix is not palindrom\n";
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3] = {
        {1, 0, 1}, {12, 0, 12}, {7, 7, 7}};
    // fillMatrix(mat1, 1, 10);
    printMatrix(mat1);
    printResult(mat1);
    return 0;
}
