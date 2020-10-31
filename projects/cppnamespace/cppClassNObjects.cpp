// Class and Object in C++
// Class is a blueprint that we need to use to build objects.
// include libraries we need for this practice:
#include <iostream>
#include <string>

using namespace std;

// Creating a class Cars

class Cars {
    // create private vaiables that can not be used outside the Class - attributes
    private: 
        string car_brand;
        string car_color;
        string car_year;
    // create public constructor and methods that can be called out of the Class
    public:
    // Constructor: Cars()
        Cars(string brand, string color, string year) {
            car_brand = brand;
            car_color = color;
            car_year = year;
        }
        // Creating an operation (also called function or method)
        void orderCar() {
            cout << "Your order summary: " << "Model: " << car_brand << " ,Color: " << car_color << " ,Year: " << car_year << endl << '\n';
        }
};

int main() {
    // Creating an object
    Cars car1("BMW", "Black", "2020");
    car1.orderCar();
    return 0;
}
