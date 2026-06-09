//Write a program to Find largest prime factor.
#include <iostream>
using namespace std;
int main()
{
    int num, largestFactor = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestFactor = i;
            num /= i;
        }
    }

    if (largestFactor > 0) {
        cout << "The largest prime factor is: " << largestFactor << endl;
    } else {
        cout << "No prime factors found." << endl;
    }

    return 0;
}