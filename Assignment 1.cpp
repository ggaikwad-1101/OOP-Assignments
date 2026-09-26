#include <iostream>
using namespace std;
class student
{
 public:
        string name;
        string roll_no;
        float marks;

 void display()
 {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<roll_no<<endl;
        cout<<"Marks:"<<marks<<endl;
        cout<<"-----------------------"<<endl;
 }
};
 int main()
 {
        student s1;
        s1.name="Gaurav";
        s1.roll_no="001";
        s1.marks=99.8;
        s1.display();

         student s2;
        s2.name="Virat";
        s2.roll_no="18";
        s2.marks=90.4;
        s2.display();

         student s3;
        s3.name="Dhoni";
        s3.roll_no="007";
        s3.marks=97.3;
        s3.display();
        return 0;
 }