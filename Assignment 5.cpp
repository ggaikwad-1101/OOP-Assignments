#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char grade;

    Student(int id, string name, char grade)
    {
        this->id = id;
        this->name = name;
        this->grade = grade;
    }

    void display()
    {
        cout << "\nStudent ID    : " << id << endl;
        cout << "Student Name  : " << name << endl;
        cout << "Student Grade : " << grade << endl;
        cout << "------------------------";
    }
};

int main()
{
    Student s1(20260001, "Aaryan", 'A');
    Student s2(20260002, "Bhushan", 'O');
    Student s3(20260003, "Gaurav", 'B');

    s1.display();
    s2.display();
    s3.display();
    return 0;
}
