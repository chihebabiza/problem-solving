#include <iostream>
#include <cmath>
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

int MySqrt(int number)
{
    for (int i = 2; i * i <= number; i++)
    {
        if (i * i == number)
            return i;
    }
    return 0;
}

int main()
{
    int number = ReadPositiveNumber("Enter a positive number");
    cout << "My Sqrt is " << MySqrt(number) << endl;
    cout << "C++ Sqrt is " << sqrt(number) << endl;
}