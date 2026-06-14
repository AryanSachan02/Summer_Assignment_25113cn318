//Write a program to Find duplicates in array. 
#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Duplicate elements in the array are: ";
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}