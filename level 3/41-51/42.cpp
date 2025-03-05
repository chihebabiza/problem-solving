#include <iostream>
using namespace std;

string ReplaceWordInString(string S1, string current, string next)
{
    short currentLen = current.length();
    for (short i = 0; i <= S1.length() - currentLen; i++)
    {
        if (S1.substr(i, currentLen) == current)
            S1.replace(i, currentLen, next);
    }
    return S1;
}

int main()
{
    string S1 = "chiheb is from bougaa bougaa";
    cout << "\nOriginal String : " << S1;
    cout << "\nString after replace : " << ReplaceWordInString(S1, "bougaa", "setif");
    return 0;
}