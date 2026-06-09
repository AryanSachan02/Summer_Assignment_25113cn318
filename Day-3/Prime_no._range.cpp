//Write a program to Print prime numbers in a range.
#include <iostream>
using namespace std;
int main() {
    int lower, upper, i, flag;

    cout << "Enter two positive integers: ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: ";

    for (i = lower; i <= upper; ++i) {
        if (i <= 1)
            continue;

        flag = 0;

        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}