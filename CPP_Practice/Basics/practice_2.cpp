#include <iostream>
using namespace std;

class task
{
    int value;

public:
    task() : value(0) {}

    void setValue(int V)
    {
        value = V;
    }
    void Display() const
    {
        cout << "value: " << value << endl;
    }

    void combine(const task &other)
    {
        value = +other.value;
    }
};

int main()
{
    task E1, E2;

    E1.setValue(5);
    E2.setValue(100);

    cout << "E1: ";
    E1.Display();

    cout << "E2: ";
}