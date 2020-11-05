// A C++ class can inherit members from more than one class and here is the extended syntax −
//          class derived-class = access base1, access base2, etc.
// Where access is one of public, protected, or private and would be given for every base class and they will be separated 
// by comma as shown above. Let us try the following example −

#include <iostream>
using namespace std;

// Declare base class Shape:
class Shape {
    protected:
        int width;
        int height;
    public:
        void setWidth(int w) {
            width = w;
        }
    void setHeight(int h) {
        height = h;
    }
};

// Declare base class PointCost

class PaintCost {
    public:
        int getCost(int area) {
            return (area * 70);
        }
};

// Declare derived class Rectangle from multiple base classes

class Rectangle: public Shape, public PaintCost {
    public:
        int getArea() {
            return (width * height);
        }
};

// The main fuction of the program

int main() {
    // Declaring object Rect of CLass Rectangle
    Rectangle Rect;
    int area;

    // using the methods from base class Shape to set recangle dimensions:
    Rect.setHeight(10);
    Rect.setWidth(7);

    // using the base class method ,getArea(), to calculate the area of the shape:
    area = Rect.getArea();

    // Output the area of the object:
    cout << "Total area is: " << area << endl;

    // Output the cost of painting based on area
    cout << "Total cost of painting: " << Rect.getCost(area) << endl;

    return 0;
}