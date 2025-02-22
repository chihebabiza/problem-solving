#include <iostream>
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

void printLineSum(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += mat[i][j];
        }
        cout << "sum of line " << i+1 << " is " << sum << endl;
    }
}

int main()
{
    int mat[3][3];
    fillMatrix(mat);
    printMatrix(mat);
    printLineSum(mat);
    return 0;
}