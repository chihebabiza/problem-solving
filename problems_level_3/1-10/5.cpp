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

int colSum(int mat[3][3], short rowNumber, short cols)
{
    short sum = 0;
    for (short i = 0; i < cols; i++)
    {
        sum += mat[i][rowNumber];
    }
    return sum;
}

void sumInArray(int mat[3][3], int arr[3], short rows, short cols)
{
    for (short i = 0; i < cols; i++)
    {
        arr[i] = colSum(mat, i, cols);
    }
}

void printResult(int arr[3])
{
    cout << "\nresult\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Sum of col " << i + 1 << " is: " << arr[i] << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int mat[3][3], arr[3];
    fillMatrix(mat);
    printMatrix(mat);
    sumInArray(mat, arr, 3, 3);
    printResult(arr);
    return 0;
}