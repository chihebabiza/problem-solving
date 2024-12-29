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
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int CountOddNumbersInArray(int arr[100], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 1)
            count++;
    }
    return count;
}

void PrintResult(int arr[100], int size)
{
    PrintArray(arr, size);
    cout << "Odd numbers count is : " << CountOddNumbersInArray(arr, size) << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], size = 0;
    ReadArray(arr, size);
    PrintResult(arr, size);
    return 0;
}