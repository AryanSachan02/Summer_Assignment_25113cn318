#include <iostream>
using namespace std;

int main() {
    int choice;
    string name, phone;
    bool saved = false;

    while (true) {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contact\n";
        cout << "3. Delete Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Phone Number: ";
            getline(cin, phone);
            saved = true;
            cout << "Contact Saved Successfully!\n";
            break;

        case 2:
            if (saved) {
                cout << "Name : " << name << endl;
                cout << "Phone: " << phone << endl;
            } else {
                cout << "No Contact Found!\n";
            }
            break;

        case 3:
            if (saved) {
                saved = false;
                name = "";
                phone = "";
                cout << "Contact Deleted Successfully!\n";
            } else {
                cout << "No Contact Available!\n";
            }
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
}