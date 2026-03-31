/*
    there are two types of plymorphism
    1.compile time polymrphism  (funtion overloadin)
    2.run time plymorphism      (function overriding)
*/
#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
    public:
    double dim1, dim2;

    shape(double dim1, double dim2)
    {
        this -> dim1 = dim1;
        this -> dim2 = dim2;
    }
    virtual double area()
    {
        return 0;
    }
};

class triangle : public shape
{
    public:
    triangle (double dim1, double dim2)
    :shape(dim1,dim2) // Calling the class of SHAPE
    {

    }
    double area()
    {
        return 0.5*dim1*dim2;
    }
};

class rectangle : public shape
{
    public:
    rectangle (double dim1, double dim2)
    :shape(dim1,dim2) // Calling the class of SHAPE
    {

    }
    double area()
    {
        return dim1*dim2;
    } 
};

int main()
{
    shape *p;
    triangle t(20,40);
    rectangle r(23,40);

    p=&t;
    cout<< "Triangle is  = "<< p-> area() <<endl;
    p=&r;
    cout<< "Rectangle is  = "<< p-> area()<<endl;
}