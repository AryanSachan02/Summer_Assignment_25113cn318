//Write a program to Find factorial of a number.
#include <iostream>
using namespace std;
int main() {
    int n, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << "The factorial of " << n << " is: " << factorial << endl;

    return 0;
}