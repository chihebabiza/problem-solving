#include<iostream>
using namespace std;

void swap(int& num1, int& num2) {
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main() {
    int n1 = 12, n2 = 20;
    swap(n1, n2);
    cout << "First number is " << n1 << endl;
    cout << "Second number is " << n2 << endl;
}