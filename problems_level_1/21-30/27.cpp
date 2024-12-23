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
    cout << "***********************\n";
    for (int i = Range; i > 0; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    PrintNumbers(ReadNumber());
    return 0;
}