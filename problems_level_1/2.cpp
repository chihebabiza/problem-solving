// print your name after read it from user

#include <iostream>
using namespace std;

void printName(string name)
{
    cout << "your name is " << name << endl;
}

string readName()
{
    string name;
    cout << "Enter your name\n";
    getline(cin, name);
    return name;
}

int main()
{
    printName(readName());
}