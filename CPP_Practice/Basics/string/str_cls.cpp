#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
    string str1 = "abm ";
    string str2 = "mejbha";
    string str3;

    //str3= str1;
    str3 = str1 + str2;
    cout<< " str3  : "<< str3 << endl;

    int len = str3.size();
    cout<< "len = " << len<< endl;

    getch();
}