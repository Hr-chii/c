#include <iostream>
using namespace std;

class Shape {
public:
    virtual ~Shape() {}
    virtual double area() const = 0;
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class IsoscelesTriangle : public Shape {
    double base, height;
public:
    IsoscelesTriangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return (base * height) / 2.0;
    }
};

int main() {
    const Shape *myShape = new Rectangle(5, 3);
    cout << myShape->area() << '\n'; // 15
    delete myShape;
    myShape = new IsoscelesTriangle(5, 3);
    cout << myShape->area() << '\n'; // 7.5
    delete myShape;
    myShape = nullptr;

    Rectangle herShape(6, 8);
    IsoscelesTriangle hisShape(5, 4);
    const Shape &yourShape = herShape;
    cout << yourShape.area() << '\n'; // 48

    const Shape &theirShape = hisShape;
    cout << theirShape.area() << '\n'; // 10
}

