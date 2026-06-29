#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 0, amount;

    while (true) {
        cout << "\n--- Bank Account System ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited!\n";
            break;

        case 2:
            cout << "Enter Withdraw Amount: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Amount Withdrawn!\n";
            } else {
                cout << "Insufficient Balance!\n";
            }
            break;

        case 3:
            cout << "Current Balance = " << balance << endl;
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
}
