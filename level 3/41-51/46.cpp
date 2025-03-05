#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};

vector<string> SplitString(string S1, string delim = " ")
{
    vector<string> words;
    size_t pos = 0;
    while ((pos = S1.find(delim)) != string::npos)
    {
        string sWord = S1.substr(0, pos);
        if (!sWord.empty())
            words.push_back(sWord);
        S1 = S1.substr(pos + delim.length());
    }
    if (!S1.empty())
        words.push_back(S1);
    return words;
}

stClient ConvertLineToRecord(string line, string separator = "#//#")
{
    stClient Client;
    vector<string> vClientData = SplitString(line, separator);

    if (vClientData.size() < 5)
    {
        cout << "Error: Malformed input data!\n";
        return Client;
    }

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.PhoneNumber = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

void PrintClientRecord(stClient Client)
{
    cout << "\nThe following is the extracted client record:\n";
    cout << "\nAccount Number : " << Client.AccountNumber;
    cout << "\nPin Code       : " << Client.PinCode;
    cout << "\nName           : " << Client.Name;
    cout << "\nPhone          : " << Client.PhoneNumber;
    cout << "\nAccount Balance: " << Client.AccountBalance << endl;
}

int main()
{
    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
    cout << "\nLine Record is:\n"
         << stLine << endl;

    stClient Client = ConvertLineToRecord(stLine);
    PrintClientRecord(Client);

    cin.get(); 
    return 0;
}
