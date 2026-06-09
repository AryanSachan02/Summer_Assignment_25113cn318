//Write a program to Find nth Fibonacci term.
#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the term number: ";
    cin >> n;
    if(n == 1) {
        cout << "The " << n << "st term of the Fibonacci series is: " << t1;
        return 0;
    }
    if(n == 2) {
        cout << "The " << n << "nd term of the Fibonacci series is: " << t2;
        return 0;
    }
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << "The " << n << "rd term of the Fibonacci series is: " << nextTerm;
    return 0;
}