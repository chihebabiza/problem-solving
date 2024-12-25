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
    cout << "Original array : ";
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

bool IsPrime(int number)
{
    if (number == 1)
        return false;
    else if (number == 2)
        return true;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void CopyPrimeNumbersInArray(int arr1[100], int arr2[100], int size1, int &size2)
{
    for (int i = 0; i < size1; i++)
    {
        if (IsPrime(arr1[i]))
        {
            arr2[size2] = arr1[i];
            size2++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], size1 = 0, size2 = 0;
    ReadArray(arr1, size1);
    CopyPrimeNumbersInArray(arr1, arr2, size1, size2);
    cout << "Array 1 \n";
    PrintArray(arr1, size1);
    cout << "Array 2 \n";
    PrintArray(arr2, size2);
    return 0;
}