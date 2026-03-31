#include<iostream>
#include<conio.h>
using namespace std;
 
class person
{
    public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name :" << name<< endl;
        cout<<"Age :" << age<< endl;
    }
};

// inheriting super(person) class  to sub(student) class
class student : public person
{
    public:
    int id;

    void display2()
    {
        cout <<"Name \t: " << name<< endl;
        cout <<"Age \t: " << age<< endl;
        cout <<"ID \t: " << id<< endl;
    }
};

int main()
{
    student s1;
    s1.id = 101;
    s1.name = "abm";
    s1.age = 24;
    s1.display2();
}