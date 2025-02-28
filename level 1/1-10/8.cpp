// read the grade from user and print pass or fail

#include <iostream>
using namespace std;

int ReadGrade()
{
    int Grade;
    cout << "Enter the grade\n";
    cin >> Grade;
    return Grade;
}

bool CheckGrade(int Grade)
{
    return (Grade >= 10);
}

void PrintResult(int Grade)
{
    if (CheckGrade(Grade))
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
}

int main()
{
    PrintResult(ReadGrade());
}