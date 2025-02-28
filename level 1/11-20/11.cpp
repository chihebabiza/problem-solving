#include <iostream>
using namespace std;

void ReadGrades(int &Num1, int &Num2, int &Num3)
{
    cout << "Enter the grade 1\n";
    cin >> Num1;
    cout << "Enter the grade 2\n";
    cin >> Num2;
    cout << "Enter the grade 3\n";
    cin >> Num3;
}

float CalulateAVerage(int Num1, int Num2, int Num3)
{
    return (float)(Num1 + Num2 + Num3) / 3;
}

bool CheckGrade(float Average)
{
    return Average >= 10;
}

void PrintResults(float Average)
{
    cout << "The average is " << Average << endl;
    if (CheckGrade(Average))
        cout << "\nYou passed" << endl;
    else
        cout << "\nYou failed" << endl;
}

int main()
{
    int n1, n2, n3;
    ReadGrades(n1, n2, n3);
    PrintResults(CalulateAVerage(n1, n2, n3));
}