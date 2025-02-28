#include <iostream>
#include<ctime>
using namespace std;

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    cout << RandomNumber(1, 10) << endl;
    return 0;
}