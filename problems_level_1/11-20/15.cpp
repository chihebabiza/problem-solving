#include <iostream>
using namespace std;

void ReadHeightAndWeight(int &A, int &B)
{
    cout << "Enter the Height \n";
    cin >> A;
    cout << "Enter the Weight \n";
    cin >> B;
}

int CalculateArea(int &A, int &B)
{
    return A * B;
}

void PrintArea(int Area)
{
    cout << "The area is " << Area << endl;
}

int main()
{
    int H, W;
    ReadHeightAndWeight(H, W);
    PrintArea(CalculateArea(H, W));
}