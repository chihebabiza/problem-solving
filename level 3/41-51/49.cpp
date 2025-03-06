#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const string ClientsFileName = "../data/data.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    size_t pos = 0;
    string sWord;

    while ((pos = S1.find(Delim)) != string::npos)
    {
        sWord = S1.substr(0, pos);
        if (!sWord.empty())
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }

    if (!S1.empty())
    {
        vString.push_back(S1); // Adds last word
    }

    return vString;
}

sClient ConvertLinetoRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector<string> vClientData = SplitString(Line, Separator);

    if (vClientData.size() < 5)
    {
        cerr << "Error: Malformed data in file!\n";
        return Client;
    }

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);

    return Client;
}

vector<sClient> LoadClientsDataFromFile(string FileName)
{
    vector<sClient> vClients;
    ifstream MyFile(FileName);

    if (!MyFile)
    {
        cerr << "Error: Could not open file '" << FileName << "'\n";
        return vClients;
    }

    string Line;
    while (getline(MyFile, Line))
    {
        sClient Client = ConvertLinetoRecord(Line);
        if (!Client.AccountNumber.empty()) // Ensure valid record
            vClients.push_back(Client);
    }

    MyFile.close();
    return vClients;
}

void PrintClientCard(const sClient &Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "\nAccount Number : " << Client.AccountNumber;
    cout << "\nPin Code       : " << Client.PinCode;
    cout << "\nName           : " << Client.Name;
    cout << "\nPhone          : " << Client.Phone;
    cout << "\nAccount Balance: " << fixed << setprecision(2) << Client.AccountBalance << endl;
}

bool FindClientByAccountNumber(string AccountNumber, sClient &Client)
{
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    for (const sClient &C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }
    return false;
}

string ReadClientAccountNumber()
{
    string AccountNumber;
    cout << "\nPlease enter Account Number: ";
    cin >> AccountNumber;
    return AccountNumber;
}

int main()
{
    sClient Client;
    string AccountNumber = ReadClientAccountNumber();

    if (FindClientByAccountNumber(AccountNumber, Client))
        PrintClientCard(Client);
    else
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!\n";

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}