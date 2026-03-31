#include <iostream>
#include<conio.h> 
using namespace std;

class student
{
public:
    const int admissionFee;
    const int examFee;
    int id;

    // constructor initializer
    student(int x, int y)
    : admissionFee(x),examFee(y)
    {
        int admissionFee = x;
        cout << admissionFee << endl;
    }
};

int main()
{
    student s1(15000,500);
    return 0;
}