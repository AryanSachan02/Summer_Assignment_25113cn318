#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee emp[10];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Input employee details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> emp[i].id;

        cout << "Employee Name: ";
        cin >> emp[i].name;

        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    // Display employee details
    cout << "\n--- Employee Records ---\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID     : " << emp[i].id << endl;
        cout << "Name   : " << emp[i].name << endl;
        cout << "Salary : " << emp[i].salary << endl;
    }

    return 0;
}