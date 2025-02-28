// // read age and driving liscence and recomendation from user and print hired or rejected

#include <iostream>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDrivingLicence;
    bool HasRecomendation;
};

stInfo readInfo()
{
    stInfo Info;
    cout << "Enter your age\n";
    cin >> Info.Age;
    cout << "Do you have driver licence 0/1 \n";
    cin >> Info.HasDrivingLicence;
    cout << "Do you have recomendation 0/1 \n";
    cin >> Info.HasRecomendation;
    return Info;
}

bool isAccepted(stInfo Info)
{
    return ((Info.Age > 21 && Info.HasDrivingLicence) || Info.HasRecomendation);
}

void printResult(stInfo Info)
{
    if (isAccepted(Info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}

int main()
{
    printResult(readInfo());
    return 0;
}