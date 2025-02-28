#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2, int &Num3)
{
    cout << "Enter the number 1\n";
    cin >> Num1;
    cout << "Enter the number 2\n";
    cin >> Num2;
    cout << "Enter the number 3\n";
    cin >> Num3;
}

float CalulateAVerage(int Num1, int Num2, int Num3)
{
    return (float)(Num1 + Num2 + Num3) / 3;
}

void PrintResults(float Average)
{
    cout << "The total is " << Average << endl;
}

int main()
{
    int n1, n2, n3;
    ReadNumbers(n1, n2, n3);
    PrintResults(CalulateAVerage(n1, n2, n3));
}