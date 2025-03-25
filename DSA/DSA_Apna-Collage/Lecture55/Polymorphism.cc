/*
Polymorphism in C++:

Polymorphism is a core concept in object-oriented programming that allows objects of different types to be treated as objects of a common base type. It enables you to write more flexible and reusable code.

Types of Polymorphism:

1. Compile-time Polymorphism:
   - Resolved at compile time.
   - Includes function overloading and operator overloading.
   - Also known as static polymorphism.

   a. Function Overloading:
      - Allows multiple functions with the same name but different parameters.
      - The compiler determines which function to call based on the arguments provided.

   b. Operator Overloading:
      - Allows redefining the behavior of operators for user-defined types.
      - Enables intuitive use of operators with custom classes.

2. Run-time Polymorphism:
   - Resolved at runtime.
   - Implemented using virtual functions.
   - Also known as dynamic polymorphism.

   a. Virtual Functions:
      - Declared in base class and can be overridden in derived classes.
      - Enables runtime binding of function calls to the correct overridden version.
      - Requires use of pointers or references to base class type.

Diagram Representation:
                Polymorphism
                    /   \
                   /     \
          Compile Time   Run Time
            /     \          |
           /       \         |
    Function    Operator   Virtual
   Overloading  Overloading Functions

Now, let's see code examples for each concept:
*/

#include <iostream>
using namespace std;

// 1. Compile-time Polymorphism

// a. Function Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
};

// b. Operator Overloading
class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// 2. Run-time Polymorphism

// Virtual Functions
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    // Function Overloading
    Calculator calc;
    cout << "Int addition: " << calc.add(5, 3) << endl;
    cout << "Double addition: " << calc.add(3.14, 2.5) << endl;

    // Operator Overloading
    Complex c1(3, 2), c2(1, 7);
    Complex c3 = c1 + c2;
    cout << "Complex addition result: ";
    c3.display();

    // Virtual Functions
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();
    shape1->draw();  // Calls Circle's draw
    shape2->draw();  // Calls Square's draw

    delete shape1;
    delete shape2;

    return 0;
}