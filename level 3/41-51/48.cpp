#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

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
        cerr << "Error: Malformed input data! Skipping entry.\n";
        return Client;
    }

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.PhoneNumber = vClientData[3];

    try
    {
        Client.AccountBalance = stod(vClientData[4]);
    }
    catch (const exception &e)
    {
        cerr << "Error converting balance for account " << Client.AccountNumber << ": " << e.what() << endl;
        Client.AccountBalance = 0.0;
    }

    return Client;
}

vector<stClient> ReadDataFromFile(string fileName, string separator)
{
    vector<stClient> Clients;
    ifstream file(fileName);
    if (!file)
    {
        cerr << "Error opening file: " << fileName << endl;
        return Clients;
    }

    string line;
    while (getline(file, line))
    {
        stClient stData = ConvertLineToRecord(line, separator);
        if (!stData.AccountNumber.empty())
            Clients.push_back(stData);
    }

    file.close();
    return Clients;
}

void PrintClient(stClient client)
{
    cout << "| " << setw(13) << left << client.AccountNumber
         << "| " << setw(7) << left << client.PinCode
         << "| " << setw(16) << left << client.Name
         << "| " << setw(13) << left << client.PhoneNumber
         << "| " << setw(10) << fixed << setprecision(2) << client.AccountBalance << " |\n";
}

void PrintAllClients(vector<stClient> clients)
{
    if (clients.empty())
        cout << "No client records found.\n";
    else
    {
        cout << "+--------------+--------+-----------------+--------------+------------+\n";
        cout << "| Account No   | Pin    | Name            | Phone        | Balance    |\n";
        cout << "+--------------+--------+-----------------+--------------+------------+\n";
        for (stClient &client : clients)
        {
            PrintClient(client);
        }
        cout << "+--------------+--------+-----------------+--------------+------------+\n";
    }
}

int main()
{
    vector<stClient> clients = ReadDataFromFile("data/data.txt", "#//#");
    PrintAllClients(clients);
    return 0;
}
