#include <iostream>
using namespace std;

bool IsPalindrom(int arr[100], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
            return false;
    }
    return true;
}

void PrintResult(int arr[100], int size)
{
    if (IsPalindrom(arr, size))
        cout << "Palindrom Array" << endl;
    else
        cout << "Not Palindrom Array" << endl;
}

int main()
{
    int arr[100] = {10, 20, 10, 20}, size = 4;
    PrintResult(arr, size);
    return 0;
}