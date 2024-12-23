#include <iostream>
using namespace std;

int ReadNumber(string message)
{
    cout << message << endl;
    int number;
    cin >> number;
    return number;
}

int CalculateReminder(int total, int paid)
{
    return paid - total;
}

int main()
{
    int total = ReadNumber("Enter the total"), paid = ReadNumber("Enter the paid");
    cout << "The reminder is " << CalculateReminder(total, paid) << endl;
    return 0;
}