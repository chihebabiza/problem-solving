#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName, LastName;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Enter your first name\n";
    cin >> Info.FirstName;
    cout << "Enter your last name\n";
    cin >> Info.LastName;
    return Info;
}

string GetFullName(stInfo Info)
{
    return Info.FirstName + " " + Info.LastName;
}

void PrintFullName(string FullName)
{
    cout << "Your full name is : " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));
    return 0;
}