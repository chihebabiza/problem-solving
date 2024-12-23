#include <iostream>
using namespace std;

int readRadio()
{
    int Diamater;
    cout << "Enter the diamater\n";
    cin >> Diamater;
    return Diamater;
}

float CircleArea(int Diamater)
{
    const float Pi = 3.141592653589793238462643383279502884197;
    return (float)Pi * Diamater * Diamater / 4;
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