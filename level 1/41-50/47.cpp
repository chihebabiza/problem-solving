#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << "\n";
        cin >> number;
    } while (number < 0);
    return number;
}

float CalculateMonthsToSettle(float ammount, float monthlyPay)
{
    return (float)ammount / monthlyPay;
}

int main()
{
    float ammount = ReadPositiveNumber("Enter the ammount");
    float monthlyPay = ReadPositiveNumber("Enter the monthly pay");
    cout << CalculateMonthsToSettle(ammount, monthlyPay) << " months" << endl;
}