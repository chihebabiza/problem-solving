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

vector<string> v(string S1, string delim = " ")
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

void displayVector(vector<string> v)
{
    cout << "Tokens : " << v.size() << "\n";
    for (string &i : v)
    {
        cout << i << endl;
    }
}

int main()
{
    displayVector(v(ReadString()));
    return 0;
}