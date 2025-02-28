#include <iostream>
using namespace std;

enum enDayWeek
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int ReadWeekDay()
{
    int number;
    cout << "Enter the day number (from 1 to 7)\n";
    cin >> number;
    return number;
}

string PrintWeekDay(int number)
{

    switch (number)
    {
    case Sun:
        return "Sunday";
    case Sat:
        return "Saturday";
    case Mon:
        return "Monday";
    case Tue:
        return "Tuesday";
    case Wed:
        return "Wednesday";
    case Thu:
        return "Thursday";
    case Fri:
        return "Friday";

    default:
        return "Invalid week day";
    }
}

int main()
{
    int number = ReadWeekDay();
    cout << "Today is " << PrintWeekDay(number) << endl;
}