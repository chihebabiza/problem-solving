#include <iostream>
#include <ctime>
using namespace std;

void printMatrix(int mat[3][3])
{
    cout << "-------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "-------------------------\n";
}

void fillMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = (j + 3 * i) + 1;
        }
    }
}

void switchValue(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void transposeMatrix(int mat[3][3])
{
    for (short i = 0; i < 3; i++)
    {
        for (short j = i ; j < 3; j++)
        {
            switchValue(mat[i][j], mat[j][i]);
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int mat[3][3];
    fillMatrix(mat);
    printMatrix(mat);
    transposeMatrix(mat);
    printMatrix(mat);
    return 0;
}