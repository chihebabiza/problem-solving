#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;
    cout << "Enter a number\n";
    cin >> number;
    return number;
}

void printMultiplicationTable(int number)
{
    for (int i = 1; i <= number; i++)
    {
        cout << i << "\t|";
        for (int j = 1; j <= number; j++)
        {
            cout << j * i << "\t";
        }
        cout << endl;
    }
}

void PrintFirstLine(int number)
{
    for (int i = 1; i <= number; i++)
    {
        cout << "\t" << i;
    }
    cout << endl;
}

void PrintLines()
{
    cout << "_________________________________________________________________________________" << endl;
}

int main()
{
    int number = ReadNumber();
    PrintFirstLine(number);
    PrintLines();
    printMultiplicationTable(number);
    return 0;
}