#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    // function
    void display()
    {
        cout << id << " " << gpa << endl;
    }

    // constructor
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student Alim(101, 3.44), mejbha(102, 3.55);
    Alim.display();
    mejbha.display();

    getch();
}