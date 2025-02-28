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

float CalculateMonthsToSettle(float ammount, int months)
{
    return (float)ammount / months;
}

int main()
{
    float ammount = ReadPositiveNumber("Enter the ammount");
    float monthlyPay = ReadPositiveNumber("Enter the months to pay");
    cout << "You pay " << CalculateMonthsToSettle(ammount, monthlyPay) << " each month" << endl;
}