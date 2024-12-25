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
    size = ReadPositiveNumber("Enter a positive number");
    for (int i = 0; i < size; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

bool IsFound(int arr[100], int value, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return true;
    }
    return false;
}

void PrintResult(int arr[100], int &value, int size)
{
    value = ReadPositiveNumber("Enter the number want to find");
    if (IsFound(arr, value, size))
        cout << "Yes , the number found is array" << endl;
    else
        cout << "No , the number not found in the array" << endl;
}

void PrintArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], size = 0, value = 0;
    ReadArray(arr, size);
    PrintArray(arr, size);
    PrintResult(arr, value, size);
    return 0;
}