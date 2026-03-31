#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << id << " " << gpa << endl;
    }
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    student Ahad, mejbha;

    Ahad.setValue(101, 3.44);
    Ahad.display();

    mejbha.setValue(102, 3.24);
    mejbha.display();

    getch();
}