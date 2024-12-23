#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter N\n";
    cin >> Number;
    return Number;
}

void PrintNumbers(int Range)
{
    for (int i = 1; i <= Range; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    PrintNumbers(ReadNumber());
    return 0;
}