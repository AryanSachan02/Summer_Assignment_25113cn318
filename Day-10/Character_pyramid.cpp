//Write a program to print character pyramid.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing letters
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }

        // Print decreasing letters
        for (int j = i - 2; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}