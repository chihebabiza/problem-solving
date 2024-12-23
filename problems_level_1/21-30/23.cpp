#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float &A, float &B, float &C)
{
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
    cout << "Enter C\n";
    cin >> C;
}

float CircleAreaByArbitraryTraingle(float A, float B, float &C)
{
    const float Pi = 3.141592653589793238462643383279502884197, p = (A + B + C) / 2;
    return Pi * pow(((A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)))), 2);
}

void PrintArea(float Area)
{
    cout << "The area is " << Area << endl;
}

int main()
{
    float A, B, C;
    ReadNumbers(A, B, C);
    PrintArea(CircleAreaByArbitraryTraingle(A, B, C));
    return 0;
}