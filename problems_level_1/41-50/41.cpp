#include <iostream>
using namespace std;

int ReadNumberOfHours()
{
    int Hours;
    cout << "Enter the number of Hours\n";
    cin >> Hours;
    return Hours;
}

float HoursToWeek(int Hours)
{
    return Hours / 24.0 / 7.0;
}

float HoursToDay(int Hours)
{
    return Hours / 24.0;
}

void PrintResult(int Hours)
{
    cout << Hours << " Hours\n";
    cout << HoursToDay(Hours) << " Days\n";
    cout << HoursToWeek(Hours) << " Weeks" << endl;
}

int main()
{
    PrintResult(ReadNumberOfHours());
}