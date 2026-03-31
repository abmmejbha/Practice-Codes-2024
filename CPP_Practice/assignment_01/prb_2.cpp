#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }
    double getRadius(double r)
    {
        return r;
    }
    double getArea()
    {
        return 3.14159 * pow(radius, 2);
    }
};

int main()
{
    Circle myCircle;
    myCircle.setRadius(5.0);

    cout << "Area of the circle with radius" << myCircle.getRadius() << "is: " << myCircle.getArea() << endl;
}