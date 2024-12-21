#include <iostream>
using namespace std;

struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};
struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};
struct stPerson
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
};

void readInfo(stPerson &person)
{
    cout << "Enter your first name: ";
    cin >> person.FirstName;
    cout << "Enter your last name: ";
    cin >> person.LastName;
    cout << "Enter your email: ";
    cin >> person.ContactInfo.Email;
    cout << "Enter your phone: ";
    cin >> person.ContactInfo.Phone;
    cout << "Enter your POBox: ";
    cin >> person.ContactInfo.Address.POBox;
    cout << "Enter your street name: ";
    cin >> person.ContactInfo.Address.StreetName;
    cout << "Enter your zip code: ";
    cin >> person.ContactInfo.Address.ZipCode;
    cout << "Enter your building number: ";
    cin >> person.ContactInfo.Address.BuildingNo;
}

void printInfo(const stPerson &person)
{
    cout << "\n****************************************\n";
    cout << "First Name: \t" << person.FirstName << "\n";
    cout << "Last Name: \t" << person.LastName << "\n";
    cout << "Email: \t\t" << person.ContactInfo.Email << "\n";
    cout << "Phone: \t\t" << person.ContactInfo.Phone << "\n";
    cout << "Address: \n";
    cout << "POBox: \t\t" << person.ContactInfo.Address.POBox << "\n";
    cout << "Street Name: \t" << person.ContactInfo.Address.StreetName << "\n";
    cout << "Zip Code: \t" << person.ContactInfo.Address.ZipCode << "\n";
    cout << "Building No: \t" << person.ContactInfo.Address.BuildingNo << "\n";
    cout << "\n****************************************\n";
}

int main()
{
    stPerson person;
    readInfo(person);
    printInfo(person);
    return 0;
}