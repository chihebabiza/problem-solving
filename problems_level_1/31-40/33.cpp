#include <iostream>
using namespace std;

int ReadGrade()
{
    int Grade;
    do
    {
        cout << "Enter your grade\n";
        cin >> Grade;
    } while (Grade < 0 || Grade > 100);
    return Grade;
}

string CheckGrade(int Grade)
{
    if (Grade < 100 && Grade > 90)
        return "Excelent";
    else if (Grade < 90 && Grade > 80)
        return "VeryGood";
    else if (Grade < 80 && Grade > 70)
        return "Good";
    else if (Grade < 70 && Grade > 60)
        return "Average";
    else if (Grade < 60 && Grade > 50)
        return "Pass";
    else if (Grade < 50 && Grade > 40)
        return "LowPass";
    else if (Grade < 40)
        return "Fail";
}

void PrintResult(string result)
{
    cout << result << endl;
}

int main()
{
    PrintResult(CheckGrade(ReadGrade()));
}