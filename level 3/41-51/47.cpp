#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};

void SaveToFile(string fileName, string data)
{
    ofstream file(fileName, ios::app);
    if (file.is_open())
        file << data << "\n";
    else
        cerr << "Error opening file\n";
    file.close();
}

string ConvertRecordToLine(stClient Client, string Seperator)
{
    string S1 = "";
    S1 += Client.AccountNumber + Seperator;
    S1 += Client.PinCode + Seperator;
    S1 += Client.Name + Seperator;
    S1 += Client.PhoneNumber + Seperator;
    S1 += to_string(Client.AccountBalance);
    return S1;
}

stClient ReadData()
{
    stClient client;
    cout << "Adding New Client: \n";
    cout << "Enter Account Number ? ";
    getline(cin, client.AccountNumber);
    cout << "Enter PinCode ? ";
    getline(cin, client.PinCode);
    cout << "Enter Name ? ";
    getline(cin, client.Name);
    cout << "Enter Phone ? ";
    getline(cin, client.PhoneNumber);
    cout << "Enter AccountBalance ? ";
    cin >> client.AccountBalance;
    cin.ignore();
    return client;
}

void AddClient()
{
    system("cls");
    stClient Client;
    char cont = 'y';
    while (cont == 'y' || cont == 'Y')
    {
        Client = ReadData();
        SaveToFile("data/data.txt", ConvertRecordToLine(Client, "#//#"));
        cout << "Client added successfully , do you want to add more clients? ";
        cin >> cont;
        cin.ignore();
    }
}

int main()
{
    AddClient();
    return 0;
}