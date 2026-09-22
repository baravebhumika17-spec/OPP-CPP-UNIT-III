#include <iostream>
using namespace std;

int calculateArea(int side)
{
    return side * side;
}

int calculateArea(int length, int width)
{
    return length * width;
}

double calculateArea(double radius)
{
    const double PI = 3.141592653589793;
    return PI * radius * radius;
}

int main()
{
    cout << "Square Area: " << calculateArea(5) << '\n';
    cout << "Rectangle Area: " << calculateArea(5, 6) << '\n';
    cout << "Circle Area: " << calculateArea(3.0) << '\n';

    return 0;
}
