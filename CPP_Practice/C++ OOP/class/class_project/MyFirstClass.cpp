#include "MyFirstClass.h"
#include <iostream>
using namespace std;

MyFirstClass::MyFirstClass()
{
    cout << "I am constructor" << endl;
}

MyFirstClass::~MyFirstClass()
{
    cout << "destrctor is called " << endl;
}

void MyFirstClass::display()
{
    cout << "display function is called" << endl;
}
