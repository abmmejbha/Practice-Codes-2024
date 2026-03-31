#include <bits/stdc++.h>
using namespace std;

class Gadget
{
    string name;
    string brand;
    double price;

public:
    // default constructor
    Gadget()
    {
        name = "Unknown";
        brand = "Generic";
        price = 0.0;

        cout << "Default Contructor" << endl;
    }
    // parameterized contructor
    Gadget(string name, string brand, double price)
    {
        this->name = name;
        this->brand = brand;
        this->price = price;
    }
    // copy constructor
    Gadget(const Gadget &ob)
    {
        name = ob.name;
        brand = ob.brand;
        price = ob.price;
        cout<<"copy constructor"<<endl;
    }
    void display()
    {
        cout << name << endl
             << brand << endl
             << price << endl;
    }
    // destructor
    ~Gadget()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Gadget g1;
    //Gadget g2("Mobile", "Nokia", 1000.00);
    //Gadget g3 = g2;

    //g2.display();

    return 0;
}