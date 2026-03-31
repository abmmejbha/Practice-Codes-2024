#include <iostream>
#include <conio.h>
using namespace std;

class Book
{
public:
// A method named Book
    Book() 
    { 
        cout << "A new book is added" << endl; 
    }
    // Method with parameter
    Book(string s)
    {
        cout << "Book" << s << "is added." << endl;
        name = s;
    }
    ~Book()
    {
        cout << "Book" << name << "is removed." << endl;
    }

private:
    string name = "ECE244";
};

Book *b1;

int main()
{
    Book b2;
    Book *b3 = new Book("Pride and Prejudice");

    if (true)
    {
        b1 = new Book();
        Book b4("Wuthering heights");
        delete b3;
        Book *b5 = new Book[2];
    }

    delete b1;
    return 0;
}