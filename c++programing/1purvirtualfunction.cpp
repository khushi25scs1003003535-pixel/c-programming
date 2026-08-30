#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Pure virtual function
    virtual void calculateArea() = 0;
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void calculateArea() override {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        cout << "Area of Rectangle = "
             << length * width << endl;
    }
};

int main() {

    // Base class pointer
    Shape* shape;

    Circle c(3.4);
    Rectangle r(2.8, 9.6);

    // Pointer points to Circle
    shape = &c;
    shape->calculateArea();

    // Pointer points to Rectangle
    shape = &r;
    shape->calculateArea();

    return 0;
}