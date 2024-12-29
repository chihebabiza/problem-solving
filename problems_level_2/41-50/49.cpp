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

int MyCeil(float number)
{
    if (number > 0)
        return (int)number + 1;
    else
        return (int)number;
}

void PrintResult(float number)
{
    cout << "My Ceil of " << number << " : " << MyCeil(number) << endl;
    cout << "C++ Ceil of " << number << " : " << ceil(number) << endl;
}

int main()
{
    float number = ReadNumber("Enter a number");
    PrintResult(number);
    return 0;
}