#include<iostream>
#include<conio.h>
using namespace std;
/*
            Funtion overloading = same name but parameter must 
                be different 
             Funtion overriding = same name same parameter

             overloading will be in same class ;
             overriding will be in different sub class by inheritance 
*/
class person
{
    public:
    void display()
    {
        cout<< "I am person"<< endl;
    }
};

class student : public person
{
    public:
    void display()
    {
        cout<< "I am student"<< endl;
    }
};

class teacher : public person
{
    public:
    void display()
    {
        cout<< "I am teacher"<< endl;
    }
};

int main()
{
    student object_1;
    object_1.display();
    teacher object_2;
    object_2.display();
}