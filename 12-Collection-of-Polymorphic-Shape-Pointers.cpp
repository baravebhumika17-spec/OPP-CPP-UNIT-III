#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Shape
{
public:
    virtual double area() const = 0;
    virtual void displayName() const = 0;

    virtual ~Shape() = default;
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
        : length(l), width(w) {}

    double area() const override
    {
        return length * width;
    }

    void displayName() const override
    {
        cout << "Rectangle";
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    explicit Circle(double r)
        : radius(r) {}

    double area() const override
    {
        const double PI = 3.141592653589793;
        return PI * radius * radius;
    }

    void displayName() const override
    {
        cout << "Circle";
    }
};

int main()
{
    vector<unique_ptr<Shape>> shapes;

    shapes.push_back(
        make_unique<Rectangle>(4.0, 3.0));

    shapes.push_back(
        make_unique<Circle>(1.0));

    for (const auto& shape : shapes)
    {
        shape->displayName();
        cout << " Area: " << shape->area() << '\n';
    }

    return 0;
}
