#include <iostream>
using namespace std;
void displayStars(int numberOfStars)
{
    for (int i = 1; i <= numberOfStars; i++)
    {
        int asci_number = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << char(asci_number++);
        }
        cout << endl;
    }
}

int main()
{
    displayStars(10);
}