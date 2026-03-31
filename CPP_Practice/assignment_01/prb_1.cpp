#include <iostream>
#include <cmath> // For the math functions (e.g., pow)

class Circle {
private:
    double radius; // Data member: radius

public:
    // Member function to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Member function to calculate the area of the circle
    double getArea() {
        return 3.14159 * pow(radius, 2);
    }
};

int main() {
    Circle myCircle; // Create an instance of the Circle class

    // Set the radius (you can replace this with any desired value)
    myCircle.setRadius(5.0);

    // Calculate and display the area
    std::cout << "Area of the circle with radius " << myCircle.getRadius() << " is: " << myCircle.getArea() << std::endl;

    return 0;
}
