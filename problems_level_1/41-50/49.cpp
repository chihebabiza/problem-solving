#include <iostream>
using namespace std;

bool CheckPIN(string code)
{
    return code == "1234";
}

string ReadPIN()
{
    string pin;
    int counter = 0;
    do
    {
        cout << "Enter the PIN code\n";
        cin >> pin;
        counter++;
        if (!CheckPIN(pin))
            cout << "Wrong PIN\n";
    } while (counter < 3 && !CheckPIN(pin));
    if (counter == 3)
        cout << "Your account is blocked\n";
    return pin;
}

float GetUserBalance(string code)
{
    if (CheckPIN(code))
        return 7500;
}

int main()
{
    cout << GetUserBalance(ReadPIN()) << endl;
}