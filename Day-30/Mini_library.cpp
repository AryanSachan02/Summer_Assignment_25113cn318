#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    Book b[n];

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID: ";
        cin >> b[i].id;
        cin.ignore();
        cout << "Title: ";
        getline(cin, b[i].title);
        cout << "Author: ";
        getline(cin, b[i].author);
    }

    cout << "\nLibrary Records\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << b[i].id << endl;
        cout << "Title: " << b[i].title << endl;
        cout << "Author: " << b[i].author << endl;
        cout << "-----------------\n";
    }

    return 0;
}