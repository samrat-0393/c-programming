#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float l, float w);

   
  

   
    float area();
    float perimeter();
};


Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}


Rectangle::Rectangle(float l, float w)
{
    length = l;
    width = w;
}





float Rectangle::area()
{
    return length * width;
}


float Rectangle::perimeter()
{
    return 2 * (length + width);
}

int main()
{
    float l, w;

    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter width of rectangle: ";
    cin >> w;

   
    Rectangle r(l, w);

    cout << "Area of rectangle = " << r.area() << endl;
    cout << "Perimeter of rectangle= " << r.perimeter() << endl;

    return 0;
}
