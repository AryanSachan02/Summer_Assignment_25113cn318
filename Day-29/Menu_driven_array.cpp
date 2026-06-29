#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;

    cout << "Enter Size of Array: ";
    cin >> n;

    cout << "Enter Array Elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (true) {
        cout << "\n--- ARRAY OPERATIONS ---\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Largest Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 5)
            break;

        switch (choice) {
            case 1:
                cout << "Array: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2: {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;
            }

            case 3: {
                int max = arr[0];
                for (int i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                cout << "Largest = " << max << endl;
                break;
            }

            case 4: {
                int key, found = 0;
                cout << "Enter Element to Search: ";
                cin >> key;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        found = 1;
                        break;
                    }
                }
                if (found)
                    cout << "Element Found\n";
                else
                    cout << "Element Not Found\n";
                break;
            }

            default:
                cout << "Invalid Choice!\n";
        }
    }

    return 0;
}