#include <iostream>
#include <string>
using namespace std;

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};

stClient ReadData()
{
    stClient client;
    cout << "Please enter client data: \n";
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
    return client;
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

int main()
{
    stClient Client = ReadData();
    cout << "\nClient Recored for Saving is : \n"
         << ConvertRecordToLine(Client, "#//#");
    return 0;
}