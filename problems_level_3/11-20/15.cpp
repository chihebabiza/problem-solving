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

short ReadNumber(string message)
{
    cout << message;
    short number;
    cin >> number;
    return number;
}

void printResult(int mat[3][3], short number)
{
    cout << "\nthe count of number " << number << " is : " << NumberCountInMatrix(mat, number);
}

int main()
{
    srand((unsigned)time(NULL));
    int mat1[3][3];
    fillMatrix(mat1, 1, 10);
    printMatrix(mat1);
    printResult(mat1, ReadNumber("enter a number : "));
    return 0;
}
