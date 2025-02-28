#include <iostream>
using namespace std;

struct stDuration
{
    int seconds, minutes, hours, days;
};

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

stDuration SecondsToDuration(int totalSeconds)
{
    stDuration Duration;
    int Reminder;
    Duration.days = totalSeconds / 86400;
    Reminder = totalSeconds % 86400;
    Duration.hours = Reminder / 3600;
    Reminder = Reminder % 3600;
    Duration.minutes = Reminder / 60;
    Reminder = Reminder % 60;
    Duration.seconds = Reminder;
    return Duration;
}

void PrintDuration(stDuration Duration)
{
    cout << Duration.days << " days\n";
    cout << Duration.hours << " hours\n";
    cout << Duration.minutes << " minutes\n";
    cout << Duration.seconds << " seconds" << endl;
}

int main()
{
    PrintDuration(SecondsToDuration(ReadPositiveNumber("Enter the task duration in seconds")));
    return 0;
}
