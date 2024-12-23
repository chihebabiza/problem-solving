#include <iostream>
using namespace std;

float readCircumference()
{
    int L;
    cout << "Enter the circumference\n";
    cin >> L;
    return L;
}

float CircleAreaByCircumference(float L)
{
    const float Pi = 3.141592653589793238462643383279502884197;
    return (L * L) / (4 * Pi);
}

void PrintArea(float Area)
{
    cout << "The area is " << Area << endl;
}

int main()
{
    PrintArea(CircleAreaByCircumference(readCircumference()));
    return 0;
}