#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float basicSalary, hra, da, totalSalary;
};

int main()
{
    Employee emp[10];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Input details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> emp[i].id;

        cout << "Employee Name: ";
        cin >> emp[i].name;

        cout << "Basic Salary: ";
        cin >> emp[i].basicSalary;

        cout << "HRA: ";
        cin >> emp[i].hra;

        cout << "DA: ";
        cin >> emp[i].da;

        emp[i].totalSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    // Display details
    cout << "\n----- Salary Details -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID           : " << emp[i].id << endl;
        cout << "Name         : " << emp[i].name << endl;
        cout << "Basic Salary : " << emp[i].basicSalary << endl;
        cout << "HRA          : " << emp[i].hra << endl;
        cout << "DA           : " << emp[i].da << endl;
        cout << "Total Salary : " << emp[i].totalSalary << endl;
    }

    return 0;
}