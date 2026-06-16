#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " numbers: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}