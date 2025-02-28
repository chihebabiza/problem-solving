#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << "\n";
        cin >> number;
    } while (number < 0);
    return number;
}

int DaysToSeconds(float days)
{
    return days * 86400;
}

int HoursToSeconds(float hours)
{
    return hours * 3600;
}

int MinutesToSeconds(float minutes)
{
    return minutes * 60;
}

int main()
{
    float days = ReadPositiveNumber("Enter Days");
    float hours = ReadPositiveNumber("Enter hours");
    float minutes = ReadPositiveNumber("Enter Minutes");
    float seconds = ReadPositiveNumber("Enter seconds");

    seconds += DaysToSeconds(days);
    seconds += HoursToSeconds(hours);
    seconds += MinutesToSeconds(minutes);

    cout << "The total in seconds " << seconds << endl;
}