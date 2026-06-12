//Write a program to Write function for perfect no.
#include <iostream>
using namespace std;
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; 
        }
    }
    return sum == num; 
}
int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;

    if (isPerfect(input)) {
        cout << input << " is a perfect number." << endl;
    } else {
        cout << input << " is not a perfect number." << endl;
    }

    return 0;
}