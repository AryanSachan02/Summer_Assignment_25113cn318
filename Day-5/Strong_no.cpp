//Write a program to Check strong number. 
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}