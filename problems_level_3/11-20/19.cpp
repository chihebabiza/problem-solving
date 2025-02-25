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

int MinInMatrix(int mat[3][3])
{
    int min = mat[0][0];
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (mat[i][j] < min)
                min = mat[i][j];
        }
    }
    return min;
}

int MaxInMatrix(int mat[3][3])
{
    int max = mat[0][0];
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            if (mat[i][j] > max)
                max = mat[i][j];
        }
    }
    return max;
}

void printResult(int mat1[3][3])
{
    cout << "Min of matrix is " << MinInMatrix(mat1) << endl;
    cout << "Max of matrix is " << MaxInMatrix(mat1) << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3];
    fillMatrix(mat1, 1, 10);
    printMatrix(mat1);
    printResult(mat1);
    return 0;
}
