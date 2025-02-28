#include <iostream>
using namespace std;

enum enRandom
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialLetter = 3,
    Digit = 4
};

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

char Random(enRandom randEnum)
{
    switch (randEnum)
    {
    case enRandom::SmallLetter:
        return char(RandomNumber(97, 122));
    case enRandom::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enRandom::SpecialLetter:
        return char(RandomNumber(33, 47));
    case enRandom::Digit:
        return char(RandomNumber(48, 57));

    default:
        cout << "invalid inputs" << endl;
        return '?';
    }
}

int main()
{
    srand((unsigned)time(NULL));
    cout << Random(SmallLetter) << endl;
    cout << Random(CapitalLetter) << endl;
    cout << Random(SpecialLetter) << endl;
    cout << Random(Digit) << endl;
}