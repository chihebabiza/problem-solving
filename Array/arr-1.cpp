#include <iostream>
using namespace std;

void readArrayData(int arr[100], int &length)
{
    cout << "Enter the number of number do you want to enter \n";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "Enter the number: " << i + 1 << "\n";
        cin >> arr[i];
    }
}

void printArrayData(int arr[100], int length)
{
    cout << "Display the array\n";
    for (int i = 0; i < length; i++)
    {
        cout << "number[" << i << "] : " << arr[i] << "\n";
    }
}

int calculateSum(int arr[100], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float calculateAverage(int arr[100], int length)
{
    return (float)calculateSum(arr, length) / length;
}

int main()
{
    int arr1[100], length = 0;
    readArrayData(arr1, length);
    printArrayData(arr1, length);
    cout << "************************\n";
    int sum = calculateSum(arr1, length);
    cout << "the Sum of array : " << sum << endl;
    cout << "the Average of array : " << (float)sum / length << endl;
}
