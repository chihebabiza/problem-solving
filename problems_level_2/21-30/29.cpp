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
    size = ReadPositiveNumber("Enter the size of array");
    for (int i = 0; i < size; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int size)
{
    if (size == 0)
    {
        cout << "Empty array";
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void CopyReseredArray(int arr1[100], int arr2[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[size - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], size = 0;
    ReadArray(arr1, size);
    PrintArray(arr1, size);
    CopyReseredArray(arr1, arr2, size);
    PrintArray(arr2, size);
}