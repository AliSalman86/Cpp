// Operators overloading in C++:
// You can redefine or overload most of the built-in operators available in C++. Thus, a programmer can use operators with
// user-defined types as well.
// Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being 
// defined. Like any other function, an overloaded operator has a return type and a parameter list.

#include <iostream>
using namespace std;

// creating Class Box
class Box {
    // declaring private attributes
    private:
        double length;          // length of a box
        double breadth;         // Breadth of a box
        double height;           // Height of a box

    public:
        // method that return the volume of a box as double number
        double getVolume(void) {
            return length * breadth * height;
        }
        void setLength(double len) {
            length = len;
        }
        void setBreadth(double bre) {
            breadth = bre;
        }
        void setHeight(double hei) {
            height = hei;
        }

        // overload the + operator so it adds two box objects
        Box operator+(const Box& b) {
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;

            return box;
        }
};

// main() function of the code:

int main() {
    // creating objects of type Box
    Box Box1;   // Declaring object Box1 of type Box
    Box Box2;   // Declaring object Box2 of type Box
    Box Box3;   // Declaring object Box3 of type Box
    double volume = 0.0;

    // dimensions of Box1:
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // dimensions of Box2:
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // dimensions of Box3 as the addition of Box1 and Box2 (Overloading operator + to add two objects)
    Box3 = Box1 + Box2;

    // Calculating volumes for boxes 1,2, and 3:
    volume = Box1.getVolume();
    cout << "Volume of Box1 is " << volume << endl;
    cout << endl;

    volume = Box2.getVolume();
    cout << "Volume of Box2 is " << volume << endl;
    cout << endl;
    
    volume = Box3.getVolume();
    cout << "Volume of Box2 is " << volume << endl;
    cout << endl;

    return 0;
}