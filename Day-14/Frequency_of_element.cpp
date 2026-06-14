//Write a program to Frequency of an element.
#include <iostream>
using namespace std;

int main() {
    int n, search, i, frequency = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to find frequency: ";
    cin >> search;
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            frequency++;
        }
    }
    cout << "Frequency of " << search << " is: " << frequency << endl;
    return 0;
}