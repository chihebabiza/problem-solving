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

void AddNumberToArray(int arr[100], int &size, int number)
{
    size++;
    arr[size - 1] = number;
}

void InputToArray(int arr[100], int &size)
{
    bool complete = true;
    do
    {
        AddNumberToArray(arr, size, ReadPositiveNumber("Enter number to array"));
        cout << "Do you want to complete? (0/1)\n";
        cin >> complete;
    } while (complete);
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
    int arr[100], size = 0;
    InputToArray(arr, size);
    cout << "Lenght of array is " << size << "\n";
    PrintArray(arr, size);
    return 0;
}