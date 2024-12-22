#include <iostream>
using namespace std;

void print_letters()
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j < 91; j++)
        {
            cout << char(i) << char(j) << "\n";
        }
    }
}

int main()
{
    print_letters();
}