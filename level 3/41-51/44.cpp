#include <iostream>
#include <string>
using namespace std;

string RemovePunctuationFromString(string S1)
{
    string S2 = "";
    for (short i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i]))
            S2 += S1[i];
    }
    return S2;
}

int main()
{
    string S2 = "hello , this is : chiheb from algeria :,.";
    cout << "\nOriginal String : " << S2;
    cout << "\nString after punctuation : " << RemovePunctuationFromString(S2);
    return 0;
}