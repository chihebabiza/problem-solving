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

int main()
{
    strInfo person1;
    readInfo(person1);
    printInfo(person1);
    return 0;
}
