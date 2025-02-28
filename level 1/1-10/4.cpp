// read age and driver liscence from user and print hired or rejected

#include <iostream>
using namespace std;

struct stInfo
{
    short age;
    bool hasDriverLicence;
};

stInfo readInfo()
{
    stInfo info;
    cout << "Enter your age\n";
    cin >> info.age;
    cout << "Do you has driver licence 0/1 \n";
    cin >> info.hasDriverLicence;
    return info;
}

bool isAccepted(stInfo info)
{
    return (info.age > 21 && info.hasDriverLicence);
}

void printResult(stInfo info)
{
    if (isAccepted(info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}

int main()
{
    printResult(readInfo());
    return 0;
}