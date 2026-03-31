#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    while (1)
    {
        try
        {
            int num1, num2;

            cout << "Enter 1st number: " << endl;
            cin >> num1;
            cout << "Enter 2nd number: " << endl;
            cin >> num2;

            if (num2 == 0)
            {
                throw -1;
            }
            double result = (double)num1 / num2;
        }
        catch (...)
        {
            cout << "divide by zero is not possible." << endl;
            cout << "Please try again." << endl
                 << endl;
        }
    }

    getch();
}