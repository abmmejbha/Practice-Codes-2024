#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student Alim, mejbha;
    
    Alim.id = 101;
    Alim.gpa = 3.44;
    cout << Alim.id << " " << Alim.gpa << endl;

    mejbha.id = 102;
    mejbha.gpa = 3.25;

    cout << mejbha.id << " " << mejbha.gpa << endl;

    getch();
}