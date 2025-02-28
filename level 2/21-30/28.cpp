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
        arr[i] = i + 1;
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

void Swap(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

void ShuffleArray(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        Swap(arr[i], arr[RandomNumber(0, size - 1)]);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], size = 0;
    ReadArray(arr1, size);
    cout << "Before Shuffling \n";
    PrintArray(arr1, size);
    ShuffleArray(arr1, size);
    cout << "After Shuffling \n";
    PrintArray(arr1, size);
    return 0;
}