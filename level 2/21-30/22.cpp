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

void ReadArray(int arr[100], int &size)
{
    size = ReadPositiveNumber("Enter the size of array");
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter the value " << i << "\n";
        cin >> arr[i];
    }
}

void PrintArray(int arr[100], int size)
{
    cout << "Original array : ";
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int CheckRepeatedInArray(int arr[100], int size, int number)
{
    int counter = 0;
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] == number)
            counter++;
    }
    return counter;
}

int main()
{
    int arr[100], size = 0;
    ReadArray(arr, size);
    int checkNumber = ReadPositiveNumber("Enter number to check");
    PrintArray(arr, size);
    cout << checkNumber << " Repeated " << CheckRepeatedInArray(arr, size, checkNumber) << " time(s)" << endl;
    return 0;
}