#include <iostream>
#include <conio.h>
using namespace std;

// class
class student
{
public:
    int id;
    double gpa;

    // fucntion
    void display()
    {
        cout << id << " " << gpa << endl;
    }
    // constructor
    // *no return type
    // *same name of class and constructor
    // *constructor is used to initialize the object
    
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student Ahad(101, 3.44);
    Ahad.display();

    student mejbha(102, 3.49);
    mejbha.display();

    getch();
}