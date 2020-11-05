// What is function overload:
// C++ allows you to specify more than one definition for a function name in the same scope, which is called function overloading.
// An overloaded declaration is a declaration that is declared with the same name as a previously declared declaration in the same
// scope, except that both declarations have different arguments and obviously different definition (implementation).
// When you call an overloaded function or operator, the compiler determines the most appropriate definition to use,
// by comparing the argument types you have used to call the function or operator with the parameter types specified in the 
// definitions. The process of selecting the most appropriate overloaded function or operator is called overload resolution.

// Function overloading in C++:

#include <iostream>
using namespace std;

// delaring Class printData
class printData {
    public:
    // declaring 3 functions with same name print(), but with different definition
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }
    void print(double f) {
        cout << "Printing float: " << f << endl;
    }
    void print(string s) {
        cout << "Printing string: " << s << endl;
    }
};

int main() {
    // creating an object from class printData
    printData pd;
    // call print to print an integer
    pd.print(5);
    // call print to print a float
    pd.print(5.4);
        // call print to print a string
    pd.print("This is function overload in C++");

    return 0;
}