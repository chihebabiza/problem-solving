#include <iostream>
using namespace std;

void ReadNumbers(float &A, float &B)
{
    cout << "Enter A\n";
    cin >> A;
    cout << "Enter B\n";
    cin >> B;
}

float CircleAreaByIsoscelesTraingle(float A, float B)
{
    const float Pi = 3.141592653589793238462643383279502884197;
    return Pi * (B * B / 4) * ((2 * A - B) / (2 * A + B));
}

void PrintArea(float Area)
{
    cout << "The area is " << Area << endl;
}

int main()
{
    float A, B;
    ReadNumbers(A, B);
    PrintArea(CircleAreaByIsoscelesTraingle(A, B));
    return 0;
}