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

void PrintInReservedOrder(int number)
{
    int r = 0;
    while (number != 0)
    {
        r = number % 10;
        cout << r << "\n";
        number /= 10;
    }
    cout << endl;
}

int main()
{
    PrintInReservedOrder(ReadPositiveNumber("Enter a positive number"));
    return 0;
}