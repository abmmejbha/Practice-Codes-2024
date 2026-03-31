
#include <iostream>
using namespace std;

const float X = 3.14;

float Area(float radius)
{
    return X * radius * radius;
}

int Area(int length, int width)
{
    return length * width;
}

float Area(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    cout << "Area of Circle: " << Area(10.0) << endl;
    cout << "Area of Rectangle: " << Area(10, 20) << endl;
    cout << "Area of Triangle: " << Area(3.4f, 4.3f) << endl;
}
