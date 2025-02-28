#include <iostream>
using namespace std;

void AddNumberToArray(int arr[100], int &size, int number)
{
    size++;
    arr[size - 1] = number;
}

void PrintArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

bool IsInArray(int arr[100], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
            return true;
    }
    return false;
}

void CopyToArray(int source[100], int dest[100], int sourceLength, int &destLength)
{
    for (int i = 0; i < sourceLength; i++)
    {
        if (!IsInArray(dest, destLength, source[i]))
            AddNumberToArray(dest, destLength, source[i]);
    }
}

void FillArray(int arr[100], int &size)
{
    AddNumberToArray(arr, size, 10);
    AddNumberToArray(arr, size, 10);
    AddNumberToArray(arr, size, 10);
    AddNumberToArray(arr, size, 50);
    AddNumberToArray(arr, size, 50);
    AddNumberToArray(arr, size, 70);
    AddNumberToArray(arr, size, 70);
    AddNumberToArray(arr, size, 70);
    AddNumberToArray(arr, size, 70);
    AddNumberToArray(arr, size, 90);
}

int main()
{
    int arr1[100], arr2[100], size1 = 0, size2 = 0;
    FillArray(arr1, size1);
    PrintArray(arr1, size1);
    CopyToArray(arr1, arr2, size1, size2);
    PrintArray(arr2, size2);
    return 0;
}
