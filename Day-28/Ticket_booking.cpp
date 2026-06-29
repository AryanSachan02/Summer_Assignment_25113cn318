#include <iostream>
using namespace std;

int main() {
    int choice;
    int seats = 5;

    while (true) {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Available Seats\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (seats > 0) {
                seats--;
                cout << "Ticket Booked Successfully!\n";
            } else {
                cout << "No Seats Available!\n";
            }
            break;

        case 2:
            if (seats < 5) {
                seats++;
                cout << "Ticket Cancelled!\n";
            } else {
                cout << "No Booked Tickets!\n";
            }
            break;

        case 3:
            cout << "Available Seats = " << seats << endl;
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid Choice!\n";
        }
    }
}