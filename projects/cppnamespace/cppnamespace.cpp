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

int main() {
    // Access value function within namespace1
    cout << namespace1::value() << '\n';
    // Access value function within namespace2
    cout << namespace2::value() << '\n';
    // Access the variable x directly in namespace2
    cout << namespace2::x << '\n';

    return 0;
}