//Write a program to Check Armstrong number.
#include <iostream>
using namespace std;
int main() {
    int num, originalNum, rem, result = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    while (originalNum != 0) {
        rem = originalNum % 10;
        result += rem * rem * rem;
        originalNum /= 10;
    }
    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}