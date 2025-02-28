#include <iostream>
using namespace std;

int readRadio()
{
    int Radio;
    cout << "Enter the radio\n";
    cin >> Radio;
    return Radio;
}

float CircleArea(int Radio)
{
    const float Pi = 3.141592653589793238462643383279502884197;
    return (float)Radio * Radio * Pi;
}

void PrintArea(float Area)
{
    cout << "The area is " << Area << endl;
}

int main()
{
    PrintArea(CircleArea(readRadio()));
    return 0;
}