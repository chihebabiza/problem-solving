#include <iostream>
using namespace std;

int ReadIntNumberInRange(int from, int to)
{
    int number;
    do
    {
        cout << "Enter a number betwween " << from << " and " << to << "\n";
        cin >> number;
    } while (number < from || number > to);
    return number;
}

int main()
{
    cout << ReadIntNumberInRange(2, 10) << endl;
}