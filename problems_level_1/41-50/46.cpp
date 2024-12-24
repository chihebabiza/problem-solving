#include <iostream>
using namespace std;

void PrintLetters()
{
    for (int i = 65; i < 91; i++)
    {
        cout << char(i) << " ";
    }
    cout << endl;
}

int main()
{
    PrintLetters();
    return 0;
}