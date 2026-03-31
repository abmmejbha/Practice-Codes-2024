#include <bits/stdc++.h>
using namespace std;

class gadget
{
    string name;
    string brand;
    double price;

public:
    // default constructor
    gadget()
    {
        name = "Unknown";
        brand = "Generic";
        price = 0.0;

        cout << "Default constructor called" << endl;
    }
    // parameterized constructor
    gadget(string name, string brand, double price)
    {
        this->name = name;
        this->brand = brand;
        this->price = price;
    }
    // copy constructor
    gadget(const gadget &ob)
    {
        name = ob.name;
        brand = ob.brand;
        price = ob.price;

        cout << "copy constructor is called" << endl;
    }
    void display()
    {
        cout << name << endl
             << brand << endl
             << price << endl;
    }
    // destructor
    ~gadget()
    {
        cout<<"destructor is called"<<endl;
    }
};

int main()
{
    gadget g1;
    gadget g2("mobile", "Nokia", 1000.00);
    //gadget g3 = g2;

    g2.display();

    return 0;
}
