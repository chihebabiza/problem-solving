#include <iostream>
#include <cmath>
using namespace std;

void ReadHeightAndWeight(int &D, int &A)
{
    cout << "Enter the Diagonal \n";
    cin >> D;
    cout << "Enter the Side \n";
    cin >> A;
}

float CalculateArea(int D, int A)
{
    return (float)A * sqrt(D * D - A * A);
}

void PrintArea(int Area)
{
    cout << "The area is " << Area << endl;
}

int main()
{
    int D, A;
    ReadHeightAndWeight(D, A);
    PrintArea(CalculateArea(D, A));
    return 0;
}
