#include <iostream>
#include <conio.h>
using namespace std;

class Employee
{
private:
    // Private Attribute
    int salary;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    // calling getter method in output
    cout << myObj.getSalary() << endl;
    getch();
}