#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string book_id;
    string book_name;
    string book_author;

    // Display book details
    void display()
    {
        cout << "Book ID     : " << book_id << endl;
        cout << "Book Name   : " << book_name << endl;
        cout << "Book Author : " << book_author << endl;
        cout << "------------------------" << endl;
    }

    // Default Constructor
    Book()
    {
        book_id = "101";
        book_name = "Python Basics";
        book_author = "John Smith";
    }

    // Parameterized Constructor
    Book(string a, string b, string c)
    {
        book_id = a;
        book_name = b;
        book_author = c;
    }
};

int main()
{
    Book b1;

    Book b2("102", "C++ Programming", "Robert Lafore");

    Book b3("103", "Data Structures", "Mark Allen");

    Book b4("104", "Analytical History", "Aradhya Samson");

    b1.display();
    b2.display();
    b3.display();
    b4.display();

    return 0;
}