//Write a program to Write function for Armstrong .
#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = to_string(num).length(); 

    while (num > 0) {
        int digit = num % 10; 
        sum += pow(digit, n); 
        num /= 10; 
    }

    return sum == originalNum; 
}
int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;

    if (isArmstrong(input)) {
        cout << input << " is an Armstrong number." << endl;
    } else {
        cout << input << " is not an Armstrong number." << endl;
    }

    return 0;
}