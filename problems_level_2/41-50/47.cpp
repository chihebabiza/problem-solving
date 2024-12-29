#include <iostream>
using namespace std;

float ReadNumber(string message)
{
    float number;
    cout << message << "\n";
    cin >> number;
    return number;
}

int round(float number)
{
    int n = number * 10;
    if (abs(n % 10) > 4)
    {
        if (number > 0)
            return (int)number + 1;
        else
            return (int)number - 1;
    }
    else
        return (int)number;
}

void PrintResult(float number)
{
    cout << "Round of " << number << " : " << round(number) << endl;
}

int main()
{
    PrintResult(ReadNumber("Enter a number"));
    return 0;
}