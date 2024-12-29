#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string message)
{
    float number;
    cout << message << "\n";
    cin >> number;
    return number;
}

int MyFloor(float number)
{
    if (number > 0)
        return (int)number;
    else
        return (int)number - 1;
}

void PrintResult(float number)
{
    cout << "My Floor of " << number << " : " << MyFloor(number) << endl;
    cout << "C++ Floor of " << number << " : " << floor(number) << endl;
}

int main()
{
    float number = ReadNumber("Enter a number");
    PrintResult(number);
    return 0;
}