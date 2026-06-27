#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks of 5 Subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n------ Marksheet ------\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << roll << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 75)
        cout << "Grade: A" << endl;
    else if (percentage >= 60)
        cout << "Grade: B" << endl;
    else if (percentage >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;

    return 0;
}