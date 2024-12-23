#include <iostream>
using namespace std;

void ReadFromUser(int &num1, int &num2, char &operation)
{
    cout << "Enter the number 1\n";
    cin >> num1;
    cout << "Enter the number 2\n";
    cin >> num2;
    cout << "Select the operation\n";
    cout << "+ or - or * or /\n";
    cin >> operation;
}

float Calculator(int num1, int num2, char operation)
{
    switch (operation)
    {
    case '*':
        return num1 * num2;
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '/':
        return (float)num1 / num2;

    default:
        return 0;
    }
}

void PrintResult(int num1, int num2, char operation)
{
    cout << num1 << " " << operation << " " << num2 << " = " << Calculator(num1, num2, operation) << endl;
}

int main()
{
    int num1, num2;
    char operation;
    ReadFromUser(num1, num2, operation);
    PrintResult(num1, num2, operation);
}