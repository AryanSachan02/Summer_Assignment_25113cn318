//Write a program to Second largest element.
#include <iostream>
using namespace std;

int main() {
    int n, i, largest, second_largest;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    largest = arr[0];
    second_largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    cout << "Second largest element is: " << second_largest << endl;
    return 0;
}