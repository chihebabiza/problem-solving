#include <iostream>
using namespace std;

string ReadPassword(string message, short size)
{
    string pass;
    do
    {
        cout << message << "\n";
        cin >> message;
    } while (pass.length() != size);
    return pass;
}

void PrintAllWordsFromAAAToZZZ(string pass)
{
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
                cout << word << "\n";
                if (word == pass)
                    break;
            }
        }
    }
    cout << endl;
}

int main()
{
    PrintAllWordsFromAAAToZZZ("YNB");
    return 0;
}