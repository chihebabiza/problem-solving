#include <iostream>
using namespace std;

string ReadString()
{
    cout << "Enter a string : ";
    string S1;
    getline(cin, S1);
    return S1;
}

void SeperateString(string &S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] == ' ')
            S1[i] = '\n';
    }
}

int main()
{
    string S1 = ReadString();
    SeperateString(S1);
    cout << S1 << endl;
    return 0;
}