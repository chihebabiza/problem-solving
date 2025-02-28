#include <iostream>
using namespace std;

struct stDistaance
{
    int mm, cm, dm, m;
};

stDistaance readDistance()
{
    stDistaance Distance;
    cout << "Enter mm ";
    cin >> Distance.mm;
    cout << "Enter cm ";
    cin >> Distance.cm;
    cout << "Enter dm ";
    cin >> Distance.dm;
    cout << "Enter m ";
    cin >> Distance.m;
    return Distance;
}

int CalculateDistanceInMm(stDistaance Distance)
{
    return Distance.mm + Distance.cm * 10 + Distance.dm * 100 + Distance.m * 1000;
}

int main()
{
    stDistaance Distance = readDistance();
    cout << "Distance in mm : " << CalculateDistanceInMm(Distance) << endl;
    cout << "Distance in m : " << CalculateDistanceInMm(Distance) / 1000.0 << endl;

    return 0;
}
