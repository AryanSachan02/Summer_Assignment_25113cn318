//Write a program to Find x^n without pow().
#include <iostream>
using namespace std;
int main() {
    int x, n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    long long result = 1; // Use long long to handle large results
    for (int i = 0; i < n; i++) {
        result *= x; // Multiply x by itself n times
    }

    cout << x << "^" << n << " = " << result << endl;
    return 0;
}