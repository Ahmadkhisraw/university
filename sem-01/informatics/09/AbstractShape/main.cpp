#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual std::string className() {
        return "shape";
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }

    std::string className() {
        return "Rectangle";
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }
    std::string className() {
        return "Circle";
    }
};

void calculateArea(Shape & shape) {
    std::cout <<shape.className() << " " << shape.calculateArea() << std::endl;
}

int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);

    calculateArea(rectangle);
    calculateArea(circle);

    return 0;
}
