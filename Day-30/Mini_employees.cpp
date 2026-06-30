#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee e[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: ";
        cin >> e[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, e[i].name);
        cout << "Salary: ";
        cin >> e[i].salary;
    }

    cout << "\nEmployee Records\n";

    for (int i = 0; i < n; i++) {
        cout << "ID: " << e[i].id << endl;
        cout << "Name: " << e[i].name << endl;
        cout << "Salary: " << e[i].salary << endl;
        cout << "-----------------\n";
    }

    return 0;
}