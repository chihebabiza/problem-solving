#include <iostream>
#include <iomanip> 
#include <ctime>
using namespace std;

void printMatrix(int mat[3][3])
{
    cout << "-------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(2) << setfill('0') << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "-------------------------\n";
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
            mat[i][j] = RandomNumber(1, 10);
        }
    }
}

void multiplyMatrix(int mat1[3][3], int mat2[3][3], int res[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            res[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3], mat2[3][3], mat3[3][3];
    fillMatrix(mat1);
    fillMatrix(mat2);
    multiplyMatrix(mat1, mat2, mat3);
    printMatrix(mat1);
    printMatrix(mat2);
    printMatrix(mat3);
    return 0;
}
