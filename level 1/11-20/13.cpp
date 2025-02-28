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

int MaxNumbers(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    else if (Num2 > Num3)
        return Num2;
    else
        return Num3;
}

void PrintMax(int Max)
{
    cout << "The max is " << Max << endl;
}

int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintMax(MaxNumbers(Num1, Num2, Num3));
}