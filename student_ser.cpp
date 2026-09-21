#include <iostream>
using namespace std;

int main() {
        int rollNo[5], search, found= 0;

        cout << "Enter roll numbers of 5 students: \n";
        for (int i = 0; i < 5; i++)
                cin >> rollNo[i];

        cout << "Enter roll number to search: ";
        cin >> search;

        for (int i = 0; i < 5; i++) {
            if (rollNo[i] == search) {
                found = 1;
                break;
            }
        }

        if (found)
                cout << "Student Found";
        else
                cout << "Student Not Found";

        return 0;
}

