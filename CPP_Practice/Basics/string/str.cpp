#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
    // char message[]= {'h','e','l','l','o','\0'};
    char name1[] = "abm";
    char name2[10];
    int len = strlen(name1);

    strcpy(name2, name1);
    cout << "Length of string = " << len;
    // strcat(name1,name2);

    // compare
    int value = strcmp(name1, name2);
    if (value == 0)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "Not Equal";
    }

    cout << "name 2 = " << name2;
    getch();
}