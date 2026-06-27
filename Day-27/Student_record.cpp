#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[10];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Input student records
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Display student records
    cout << "\n--- Student Records ---\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}