#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int num_1, num_2;
    int sum, sub, mul;
    double div;

    cout << "Enter two number:" << endl;
    cin >> num_1 >> num_2;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    cout << setw(10) << "sum = " << num_1 + num_2 << endl;

    cout << setw(10) << "sub = " << num_1 - num_2 << endl;

    cout << setw(10) << "mul = " << num_1 * num_2 << endl;

    div = (double)num_1 / num_2;
    cout << setw(10) << "div = " << div << endl;

    getch();
}
