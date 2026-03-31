#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name;
    ifstream file("student_details.txt");

    while (getline(file, name))
    {
        cout << name << endl;
    }
    file.close();
}
