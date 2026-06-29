#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter String: ";
    getline(cin, str);

    while (true) {
        cout << "\n--- STRING OPERATIONS ---\n";
        cout << "1. Display String\n";
        cout << "2. String Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 4)
            break;

        switch (choice) {
            case 1:
                cout << "String = " << str << endl;
                break;

            case 2:
                cout << "Length = " << str.length() << endl;
                break;

            case 3:
                cout << "Reversed String = ";
                for (int i = str.length() - 1; i >= 0; i--)
                    cout << str[i];
                cout << endl;
                break;

            default:
                cout << "Invalid Choice!\n";
        }
    }

    return 0;
}