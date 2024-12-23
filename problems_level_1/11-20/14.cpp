#include <iostream>
using namespace std;

void ReadNumbers(int &A, int &B)
{
    cout << "Enter the number A\n";
    cin >> A;
    cout << "Enter the number B\n";
    cin >> B;
}

void SWap2Numbers(int &A, int &B)
{
    int tmp = A;
    A = B;
    B = tmp;
}

void PrintResults(int A, int B)
{
    cout << "\nA is " << A << endl;
    cout << "B is " << B << endl;
}

int main()
{
    int A, B;
    ReadNumbers(A, B);
    PrintResults(A, B);
    SWap2Numbers(A, B);
    PrintResults(A, B);
}