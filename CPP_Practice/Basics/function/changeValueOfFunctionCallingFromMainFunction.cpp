#include <iostream>
#include <conio.h>

void display(int *num)
{
    *num = 20;
}

using namespace std;
int main()
{
    int x = 10;
    cout << "before the calling the funcion x =" << x << endl;

    display(&x);
    cout<< "after calling the function x = " << x << endl;
}