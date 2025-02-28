#include <iostream>
using namespace std;

void ReadNumbers(int &B, int &H)
{
    cout << "Enter the Base \n";
    cin >> B;
    cout << "Enter the Height \n";
    cin >> H;
}

float CalcualteTriangleArea(int B, int H)
{
    return (B * H) / 2;
}

void PrintArea(int Area)
{
    cout << "The area is " << Area << endl;
}

int main()
{
    int B, H;
    ReadNumbers(B, H);
    PrintArea(CalcualteTriangleArea(B, H));
}