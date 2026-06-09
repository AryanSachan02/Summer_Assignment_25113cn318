//Write a program to Convert decimal to binary.
#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, base = 1;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    cout << "Binary number: " << binary << endl;
    return 0;
}