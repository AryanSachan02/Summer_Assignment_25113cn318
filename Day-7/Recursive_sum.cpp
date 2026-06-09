//Write a program to Recursive sum of digits.
#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: sum of digits of 0 is 0
    }
    return (n % 10) + sumOfDigits(n / 10); // Recursive case
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Sum of digits is not defined for negative numbers." << endl;
    } else {
        cout << "Sum of digits of " << number << " is " << sumOfDigits(number) << "." << endl;
    }

    return 0;
}