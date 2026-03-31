#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;

    ofstream file;

    file.open("student_details.txt", ios::out | ios::app);

    cout << "enter the name: " << endl;
    getline(cin, name);

    file << "welcome boss " << name << endl;

    cout << "data is stored to \"list.txt\" file" << endl;

    file.close();

    // How to read from file

    //string line;
    ifstream file("student_details.txt");

    while (getline(file, name))
    {
        cout << name << endl;
    }
    file.close();
}
