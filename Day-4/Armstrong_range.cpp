//Write a program to Print Armstrong numbers in a range.
#include <iostream>
using namespace std;
int main() {
    int low, high, num, originalNum, rem, result;
    cout << "Enter the lower and upper limit: ";
    cin >> low >> high;
    cout << "Armstrong numbers between " << low << " and " << high << " are: ";
    for (num = low; num <= high; num++) {
        originalNum = num;
        result = 0;
        while (originalNum != 0) {
            rem = originalNum % 10;
            result += rem * rem * rem;
            originalNum /= 10;
        }
        if (result == num)
            cout << num << " ";
    }
    return 0;
}