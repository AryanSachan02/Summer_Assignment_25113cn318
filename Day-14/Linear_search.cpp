//Write a program to Linear search.
#include <iostream>
using namespace std;
int main() {
    int n, search, i;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> search;
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found in the array." << endl;
    return 0;
}