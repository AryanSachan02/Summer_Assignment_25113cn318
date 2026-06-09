//Write a program to Recursive reverse number. 
#include <iostream>
using namespace std;
int reverseNumber(int n, int rev = 0) {
    if (n == 0) {
        return rev; // Base case: when n is 0, return the reversed number
    }
    rev = rev * 10 + (n % 10); // Append the last digit of n to rev
    return reverseNumber(n / 10, rev); // Recursive case: remove the last digit from n
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Reverse of a negative number is not defined." << endl;
    } else {
        cout << "Reverse of " << number << " is " << reverseNumber(number) << "." << endl;
    }

    return 0;
}