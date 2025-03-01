#include <iostream>
#include <vector>
using namespace std;

vector<string> ReadWords()
{
    vector<string> words;
    char ch = 'y';
    string S1;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Enter a string : ";
        cin >> S1;
        words.push_back(S1);
        cout << "Do you want to continue : (Y/N) ";
        cin >> ch;
    }
    return words;
}

string join(const vector<string> &vect, const string &elem = " ")
{
    if (vect.empty())
        return "";
    string phrase = vect[0];
    for (size_t i = 1; i < vect.size(); i++)
    {
        phrase += elem + vect[i];
    }
    return phrase;
}

int main()
{
    vector<string> vect = ReadWords();
    cout << "\nVector after join : " << join(vect);
    return 0;
}