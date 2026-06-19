//Write a program to find diagonal sum.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of matrix: ";
    cin >> n;

    int A[10][10];
    int sum = 0;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    cout << "Diagonal Sum = " << sum;

    return 0;
}
