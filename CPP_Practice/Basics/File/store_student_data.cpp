#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string name;
    int age;

    ofstream file;
    file.open("student_details.txt", ios::out | ios::app);

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter student " << i + 1 << " name : " << endl;
        getline(cin, name);   // taking input and assigned to name
        file << name << "\t"; // storing name to file

        cout << "Enter " << i + 1 << " age: " << endl;
        cin >> age;
        file << age << endl;
        cin.ignore(); // if any character found after age it will ignore it

        cout<<"Data stored successful!!"<<endl;
    }
    file.close();
}
