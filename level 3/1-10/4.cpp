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

void printRowSum(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += mat[j][i];
        }
        cout << "sum of row " << i + 1 << " is " << sum << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int mat[3][3];
    fillMatrix(mat);
    printMatrix(mat);
    printRowSum(mat);
    return 0;
}