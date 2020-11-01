// What is a Constructor:
// A constructor is a member function of a class which initializes objects of a class.
// In C++, Constructor is automatically called when object (instance of class) create. It is special member
// function of the class, that usually carry same name as class.
// Constructor, as a special member function, differ from normal functions in following ways:

// - Constructor has same name as the class itself
// - Constructors don't have return type
// - A constructor is automatically called when an object is created
// - If we do not specify a constructor, C++ compiler generates a default constructor for us 
// (expects no parameters and has an empty body).

// Types of constructors:
// 1- Default constructor: Default constructor is the constructor which doesn’t take any argument. It has no parameters.
// 2- Parametrized constructor: It is possible to pass arguments to constructors. Typically, these arguments help initialize an 
// object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other
// function. When you define the constructor’s body, use the parameters to initialize the object.
// 3- Copy constructor: A copy constructor is a member function which initializes an object using another object of the same class.

#include <iostream>
using namespace std;

// creating a Class named construct
class construct {
    public:
    int a, b;
    // creating a default Constructor: construct
    construct() { a = 10; b = 20;}
    // creating a parameterized Constructor: construct
    construct(int x, int y) { a = x; b = y; }
    // creating a copy constructor using c2 as reference
    construct(const construct &rhs) { a = rhs.a; b = rhs.b; }
};

int main() {
    // Default constructor called automatically when the object c is created
    construct c1;
    cout << "a:" << c1.a << endl;
    cout << "b:" << c1.b << endl;
    cout << endl;
    // create an object c2 with parameterized constructor: construct
    construct c2(30, 40);
    cout << "new a: " << c2.a << endl;
    cout << "new b: " << c2.b << endl;
    cout << endl;
    // copy construct used to create object c3
    construct c3 = c2;
    cout << "copy a: " << c3.a << endl;
    cout << "copy b: " << c3.b << endl;
    cout << endl;

    return 0;
}

// Constructor Overloading: when there are more than 1 constructor in a Class