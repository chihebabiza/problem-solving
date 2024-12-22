#include <iostream>
using namespace std;

void star_numbers(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = i; j <= number; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    star_numbers(5);
}