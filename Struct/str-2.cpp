#include <iostream>
using namespace std;

struct strInfo
{
    string firstName, lastName, phone;
    int age;
};

void readInfo(strInfo &info)
{
    cout << "Enter your first name \n";
    cin >> info.firstName;
    cout << "Enter your last name \n";
    cin >> info.lastName;
    cout << "Enter your age \n";
    cin >> info.age;
    cout << "Enter your phone\n";
    cin >> info.phone;
}

void printInfo(strInfo info)
{
    cout << "\n*********************\n";
    cout << "first name : " << info.firstName << "\n";
    cout << "last name : " << info.lastName << "\n";
    cout << "age : " << info.age << "\n";
    cout << "phone : " << info.phone << "\n";
    cout << "**************************" << endl;
}

void readPersonInfo(strInfo persons[100], int &length)
{
    cout << "Enter number of persons wnat to read\n";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "The person " << i + 1 << " Info\n";
        readInfo(persons[i]);
        cout << "*******************************\n";
    }
}

void printPersonInfo(strInfo persons[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        printInfo(persons[i]);
    }
}

int main()
{
    strInfo persons[100];
    int numberOfPersons = 0;
    readPersonInfo(persons, numberOfPersons);
    printPersonInfo(persons, numberOfPersons);

    return 0;
}
