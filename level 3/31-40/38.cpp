#include <iostream>
#include <vector>
using namespace std;

string ReadString()
{
    cout << "Enter a string : ";
    string S1;
    getline(cin, S1);
    return S1;
}

string LeftTrim(string S1)
{
    short start = 0;

    while (start < S1.length() && S1[start] == ' ')
        start++;

    S1.erase(0, start);

    return S1;
}

string RightTrim(string S1)
{
    short end = S1.length() - 1;

    while (end >= 0 && S1[end] == ' ')
        end--;

    S1.erase(end + 1);

    return S1;
}

string Trim(string S1)
{
    S1 = LeftTrim(RightTrim(S1));
    return S1;
}
int main()
{
    string S1 = "          chiheb abiza            ";
    cout << "\nString :" << S1;
    cout << "\nTrim Right :" << RightTrim(S1);
    cout << "\nTrim Left :" << LeftTrim(S1);
    cout << "\nTrim  :" << Trim(S1);
    return 0;
}