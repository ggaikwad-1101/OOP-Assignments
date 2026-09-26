#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string phone;
    double salary;
    string department;

public:
    // Function to take employee details
    void input()
    {
        cout << "\nEnter Employee Details\n";
        cout << "----------------------\n";

        cout << "Name: ";
        cin >> name;

        cout << "Phone Number: ";
        cin >> phone;

        cout << "Salary: ";
        cin >> salary;

        cout << "Department: ";
        cin >> department;
    }

    // Function to display employee details
    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "----------------------\n";
        cout << "Name       : " << name << endl;
        cout << "Phone      : " << phone << endl;
        cout << "Salary     : " << salary << endl;
        cout << "Department : " << department << endl;
    }
};

int main()
{
    Employee e1, e2, e3;

    cout << "========== EMPLOYEE MANAGEMENT SYSTEM ==========\n";

    e1.input();
    e2.input();
    e3.input();

    cout << "\n\n========== ALL EMPLOYEE DETAILS ==========\n";

    e1.display();
    e2.display();
    e3.display();

    return 0;
}