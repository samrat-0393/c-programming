#include <iostream>
using namespace std;

double area(double radius)
{
    return 3.14159 * radius * radius;
}


double area(double length, double width)
{
    return length * width;
}


double area(double base, double height, int)
{
    return 0.5 * base * height;
}

int main()sw                                                                   
{
    double radius, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << area(length, width) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height, 0) << endl;

    return 0;
}

