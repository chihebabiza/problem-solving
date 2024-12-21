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
        cout << arr << "[" << i << "] : " << arr[i] << "\n";
    }
}

int main()
{
    int arr1[100], length = 0;
    readArrayData(arr1, length);
    printArrayData(arr1, length);
}
