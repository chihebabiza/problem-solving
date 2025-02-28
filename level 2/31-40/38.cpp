#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << "\n";
        cin >> number;
    } while (number < 0);
    return number;
}

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void ReadArray(int arr[100], int &size)
{
    size = ReadPositiveNumber("Enter the size of table");
    for (int i = 0; i < size; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void AddOddNumberToArray(int arr[100], int &size, int number)
{
    if (number % 2 == 1)
    {
        size++;
        arr[size - 1] = number;
    }
}

void PrintArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void CopyToArray(int arr1[100], int arr2[100], int size1, int &size2)
{
    for (int i = 0; i < size1; i++)
    {
        AddOddNumberToArray(arr2, size2, arr1[i]);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], size1 = 0, size2 = 0;
    ReadArray(arr1, size1);
    PrintArray(arr1, size1);
    CopyToArray(arr1, arr2, size1, size2);
    PrintArray(arr2, size2);
    return 0;
}