// Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes,
// giving them namespace scope. This allows organizing the elements of programs into different logical scopes
// referred to by names.

// Namespace is a feature added in C++ and not present in C.
// A namespace is a declarative region that provides a scope to the identifiers (names of the types, function, variables etc) inside it.
// Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.

// A namespace definition begins with the keyword namespace followed by the namespace name as follows:

// creating namespaces
#include <iostream>
using namespace std;

namespace namespace1 {
    int value() {return 5;}
}

namespace namespace2 {
    const double x = 100;
    double value() { return 2*x; }
}

namespace namespace3 {
    // A Class declaration and definition in a namespace
    class nsClass {
        public: void display() {
            cout << "namespace0::nsClass::display()\n";
        }
    };
}

namespace namespace4 {
    // A Class declared inside namespace4 and defined outside it
    class anotherNSClass;
}

// Class anotherNSClass declared in namespace4 but defined below outside the namespace
class namespace4::anotherNSClass {
    public: void display() {
        cout << "namespace4::anotherNSClass::display()\n";
    }
};

namespace namespace5 {
    // define a method of a Class outside the namespace
    void display();
    class nsClassWithMethodOutside {
        public: void dispaly();
    };
}
// defining the method inside Class nsClassWithMethodOutside
    void namespace5::nsClassWithMethodOutside::dispaly() {
        cout << "namespace5::nsClassWithMethodOutside::dispaly()\n";
    }
    // defining the method display() inside the namespace
    void namespace5::display() {
        cout << "namespace5::display()\n";
    }

int main() {
    // Access value function within namespace1
    cout << namespace1::value() << '\n';
    cout << "==================================================\n";
    // Access value function within namespace2
    cout << namespace2::value() << '\n';
    // Access the variable x directly in namespace2
    cout << namespace2::x << '\n';
    cout << "==================================================\n";
    // Creating an Object of nsClass Class
    namespace3::nsClass obj1;
    obj1.display();
    cout << "=========================Declaring Class inside namespace but defining it outside the namespace=========================\n";
    namespace4::anotherNSClass obj2;
    obj2.display();
    cout << "=========================Defining Method outside of namespace=========================\n";
    namespace5::display();
    namespace5::nsClassWithMethodOutside obj3;
    obj3.dispaly();
    return 0;
}