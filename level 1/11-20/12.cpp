#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2)
{
    cout << "Enter the number 1\n";
    cin >> Num1;
    cout << "Enter the number 2\n";
    cin >> Num2;
}

int MaxNumbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else if (Num2 > Num1)
        return Num2;
    else
        return 0;
}

void PrintMax(int Max)
{
    if (Max == 0)
        cout << "Two numbers are equal" << endl;
    else
        cout << "The max is " << Max << endl;
}

int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintMax(MaxNumbers(Num1, Num2));
}