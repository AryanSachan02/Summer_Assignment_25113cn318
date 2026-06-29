#include <iostream>
using namespace std;

int main() {
    string item;
    int quantity = 0;
    int choice;

    while (true) {
        cout << "\n--- INVENTORY MANAGEMENT SYSTEM ---\n";
        cout << "1. Add Item\n";
        cout << "2. View Item\n";
        cout << "3. Update Quantity\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter Item Name: ";
                getline(cin, item);
                cout << "Enter Quantity: ";
                cin >> quantity;
                cin.ignore();
                cout << "Item Added Successfully!\n";
                break;

            case 2:
                if (item == "")
                    cout << "No Item Available!\n";
                else {
                    cout << "Item Name : " << item << endl;
                    cout << "Quantity  : " << quantity << endl;
                }
                break;

            case 3:
                if (item == "")
                    cout << "No Item Available!\n";
                else {
                    cout << "Enter New Quantity: ";
                    cin >> quantity;
                    cin.ignore();
                    cout << "Quantity Updated Successfully!\n";
                }
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid Choice!\n";
        }
    }
}