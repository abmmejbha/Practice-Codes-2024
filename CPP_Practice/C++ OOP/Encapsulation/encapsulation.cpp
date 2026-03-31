#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    // access element in private section of class
    string name;

public:
    // setter method
    void setName(string x)
    {
        name = x;
    }
    // getter method
    string getName()
    {
        return name;
    }
};

int main()
{
    student s1;

    s1.setName("abm mejbha");
    // calling getter method in output
    cout << s1.getName() << endl;
    getch();
}