//Write a program to Convert binary to decimal.
#include <iostream>
using namespace std;
int main() {
    int binary;
    int decimal = 0, base = 1, lastDigit;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }
    cout << "Decimal number: " << decimal << endl;
    return 0;
}