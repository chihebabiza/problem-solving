#include <iostream>

using namespace std;

short ReadYear()
{
    short year;
    cout << "Enter a year ";
    cin >> year;
    return year;
}

short ReadMonth()
{
    short month;
    cout << "Enter a month ";
    cin >> month;
    return month;
}

short ReadDay()
{
    short day;
    cout << "Enter a day ";
    cin >> day;
    return day;
}

bool IsLeapYear(int year)
{
    return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
}

short DaysInMonth(short month, short year)
{
    short daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && IsLeapYear(year))
        return 29;
    return daysInMonth[month - 1];
}

short DaysFromBeginingYear(short day, short month, short year)
{
    short numDays = 0;
    for (short i = 1; i < month; i++)
    {
        numDays += DaysInMonth(i, year);
    }
    return numDays + day;
}

int main()
{
    short year = ReadYear();
    short month = ReadMonth();
    short day = ReadDay();
    cout << "Number of days from the begining of the year is " << DaysFromBeginingYear(day, month, year);
    return 0;
}