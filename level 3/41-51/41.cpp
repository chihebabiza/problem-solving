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

vector<string> SplitString(string S1, string delim = " ")
{
    vector<string> words;
    short Counter = 0;
    short pos = 0;
    string sWord;
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            words.push_back(sWord);
        }
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "")
    {
        words.push_back(S1);
    }
    return words;
}

string ReverseWords(string S1)
{
    vector<string> words;
    string S2 = "";
    words = SplitString(S1);

    vector<string>::iterator it = words.end();

    while (it != words.begin())
    {
        --it;
        S2 += *it + " ";
    }
    S2 = S2.substr(0, S2.length() - 1);
    return S2;
}

int main()
{
    string S1 = ReadString();
    cout << "\nString after reversing words : " << ReverseWords(S1);
    return 0;
}