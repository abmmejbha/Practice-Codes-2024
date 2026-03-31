#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    
    //creating a file variable
    ofstream file;

    // opening a file named "contact.txt"
    // app (append) = add something to file
    file.open("contact.txt",ios::out|ios::app);

    // taking inputs and assigning to name variable
    cout<<"Enter your name: ";
    getline(cin,name);

    // writing name to file 
    file << "welcome" << name <<endl;

    cout<<"data is stored to 'contact.txt' "<<endl; 

    file.close();
}