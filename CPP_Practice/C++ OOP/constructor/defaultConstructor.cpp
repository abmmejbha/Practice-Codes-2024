#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    //string name;

    // constructor
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    //default constructor
    student()
    {
        cout << "default constructor"<< endl;
    }
    void display()
    {
        cout << id << "  " << gpa << endl;
    }
};

int main()
{
    // This will call default constructor
    student ob;

    student alim(101, 3.56);
    alim.display();

    student lalim(103, 3.95);
    lalim.display();

    student dalim(104,3.53);
    dalim.display();

    getch();
}