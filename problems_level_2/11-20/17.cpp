#include <iostream>
#include <string>
using namespace std;

string ReadPassword()
{
    string Password;
    cout << "Please enter a 3-Letter Password (all capital)?\n";
    cin >> Password;
    return Password;
}

void GuessPassword(string OriginalPassword)
{
    int counter = 1;
    string word = "";
    for (int i = 65; i < 91; i++)
    {
        for (int j = 65; j < 91; j++)
        {
            for (int z = 65; z < 91; z++)
            {
                word = "";
                word += char(i);
                word += char(j);
                word += char(z);
                cout << "Trial [ " << ++counter << " ] = " << word << "\n";
                if (OriginalPassword == word)
                {
                    cout << "\nPassword is " << OriginalPassword << "\n";
                    cout << "Found after " << counter << " Trial(s)" << endl;
                    return;
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    GuessPassword(ReadPassword());
}