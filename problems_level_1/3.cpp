// read number from user and check it if odd or even

#include <iostream>
using namespace std;

enum enNumberType
{
    odd = 1,
    even = 2
};

int readNumber()
{
    int number;
    cout << "Enter a number\n";
    cin >> number;
    return number;
}

enNumberType checkNumberType(int number)
{
    int result = number % 2;
    if (result == 0)
    {
        return enNumberType::even;
    }
    else
        return enNumberType::odd;
}

void printNumberType(enNumberType numberType)
{
    if (numberType == enNumberType::even)
    {
        cout << "Number is Even\n";
    }
    else
        cout << "Number is Odd\n";
}

int main()
{
    printNumberType(checkNumberType(readNumber()));
}