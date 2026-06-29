#include <iostream>
using namespace std;

int main() {
    int choice;
    string book;
    bool issued = false;

    while (true) {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Book Name: ";
            getline(cin, book);
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (book == "")
                cout << "No Book Available!\n";
            else if (!issued) {
                issued = true;
                cout << "Book Issued Successfully!\n";
            } else
                cout << "Book Already Issued!\n";
            break;

        case 3:
            if (issued) {
                issued = false;
                cout << "Book Returned Successfully!\n";
            } else
                cout << "No Book Issued!\n";
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
}