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

int NumberCountInMatrix(int mat[3][3], short number)
{
    short count = 0;
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (mat[i][j] == number)
                count++;
        }
    }
    return count;
}

bool MatrixSparce(int mat[3][3])
{
    short size = 9;
    return (NumberCountInMatrix(mat, 0) > size / 2);
}

void printResult(int mat[3][3])
{
    if (MatrixSparce(mat))
        cout << "The matrix is sparce";
    else
        cout << "The matrix is not sprace";
}

int main()
{
    srand((unsigned)time(NULL));
    // int mat1[3][3];
    int mat1[3][3] = {
        {1, 0, 0},
        {2, 0, 0},
        {3, 0, 0}};
    // fillMatrix(mat1, 1, 10);
    printMatrix(mat1);
    printResult(mat1);
    return 0;
}
