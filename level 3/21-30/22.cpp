#include <iostream>

using namespace std;

void FibonacciWithRecursion(short number, long long prev1 = 1, long long prev2 = 1)
{
    if (number == 0)
        return;

    cout << prev1 << "\t"; 
    FibonacciWithRecursion(number - 1, prev2, prev1 + prev2);
}

int main()
{
    short num = 10;
    FibonacciWithRecursion(num);
    cout << endl;
    return 0;
}
