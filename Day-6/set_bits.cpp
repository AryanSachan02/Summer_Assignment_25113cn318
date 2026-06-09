//Write a program to Count set bits in a number.
#include <iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (number > 0) {
        count += number & 1; // Increment count if the last bit is set
        number >>= 1; // Right shift the bits to check the next bit
    }
    cout << "Number of set bits: " << count << endl;
    return 0;
}