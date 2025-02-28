#include <iostream>
using namespace std;

int ReadNumber(string message)
{
    cout << message << "\n";
    int number;
    cin >> number;
    return number;
}

float CalculateCharges(float BillValue, int Percentage)
{
    return BillValue * (1 + (float)(Percentage / 100.0));
}

int main()
{
    cout << CalculateCharges(CalculateCharges(ReadNumber("Enter the total"), 10), 16) << endl;
}