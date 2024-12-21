#include <iostream>
using namespace std;

enum enWeekDay
{
    Sun = 1,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

void showWeekDayMenu()
{
    cout << "*********************************\n";
    cout << "           Week Days\n";
    cout << "*********************************\n";

    cout << "1 : Sunday" << endl;
    cout << "2 : Monday" << endl;
    cout << "3 : Tuesday" << endl;
    cout << "4 : Wednesday" << endl;
    cout << "5 : Thursday" << endl;
    cout << "6 : Friday" << endl;
    cout << "7 : Saturday" << endl;

    cout << "*********************************\n";
    cout << "Please enter the number of the week\n";
}

enWeekDay readWeekDay()
{
    enWeekDay weekDay;
    int c;
    cin >> c;
    weekDay = (enWeekDay)c;
    return weekDay;
}

string getWeekDayName(enWeekDay weekDay)
{
    switch (weekDay)
    {
    case enWeekDay::Sun:
        return "Sunday";
    case enWeekDay::Mon:
        return "Monday";
    case enWeekDay::Tue:
        return "Tuesday";
    case enWeekDay::Wed:
        return "Wednesday";
    case enWeekDay::Thu:
        return "Thursday";
    case enWeekDay::Fri:
        return "Friday";
    case enWeekDay::Sat:
        return "Saturday";
    default:
        return "Invalid day";
    }
}

int main()
{
    showWeekDayMenu();
    string weekDay = getWeekDayName(readWeekDay());
    cout << "Today is " << weekDay << endl;
    return 0;
}