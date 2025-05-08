#include <iostream>  // Include the input/output stream library
using namespace std;  // Use the standard namespace to avoid prefixing std::

// Base class for demonstrating Single Inheritance
class Animal {
public:
    // Method to represent eating behavior
    void eat() {
        cout << "Animal is eating" << endl;  // Output eating action
    }
};

// Derived class inheriting from Animal (Single Inheritance)
class Dog : public Animal {
public:
    // Additional method specific to Dog
    void bark() {
        cout << "Dog is barking" << endl;  // Output barking action
    }
};

// First base class for Multiple Inheritance
class FlyingCreature {
public:
    // Method to represent flying behavior
    void fly() {
        cout << "Flying creature is flying" << endl;  // Output flying action
    }
};

// Second base class for Multiple Inheritance
class SwimmingCreature {
public:
    // Method to represent swimming behavior
    void swim() {
        cout << "Swimming creature is swimming" << endl;  // Output swimming action
    }
};

// Derived class inheriting from both FlyingCreature and SwimmingCreature (Multiple Inheritance)
class Duck : public FlyingCreature, public SwimmingCreature {
public:
    // Additional method specific to Duck
    void quack() {
        cout << "Duck is quacking" << endl;  // Output quacking action
    }
};

// Base class for Multi-level Inheritance
class GrandParent {
public:
    // Method specific to GrandParent
    void grandParentMethod() {
        cout << "GrandParent method called" << endl;  // Output grandparent action
    }
};

// Intermediate class inheriting from GrandParent
class Parent : public GrandParent {
public:
    // Method specific to Parent
    void parentMethod() {
        cout << "Parent method called" << endl;  // Output parent action
    }
};

// Derived class inheriting from Parent (Multi-level Inheritance)
class Child : public Parent {
public:
    // Method specific to Child
    void childMethod() {
        cout << "Child method called" << endl;  // Output child action
    }
};

// Base class for Hierarchical Inheritance
class Shape {
public:
    // Pure virtual function to be implemented by derived classes
    virtual void draw() = 0;
};

// Derived class Circle inheriting from Shape
class Circle : public Shape {
public:
    // Implementation of draw method for Circle
    void draw() override {
        cout << "Drawing a circle" << endl;  // Output circle drawing action
    }
};

// Derived class Square inheriting from Shape
class Square : public Shape {
public:
    // Implementation of draw method for Square
    void draw() override {
        cout << "Drawing a square" << endl;  // Output square drawing action
    }
};

// Base class A for Hybrid Inheritance
class A {
public:
    // Method specific to class A
    void methodA() {
        cout << "Method A called" << endl;  // Output method A action
    }
};

// Class B inheriting from A
class B : public A {
public:
    // Method specific to class B
    void methodB() {
        cout << "Method B called" << endl;  // Output method B action
    }
};

// Independent class C for Hybrid Inheritance
class C {
public:
    // Method specific to class C
    void methodC() {
        cout << "Method C called" << endl;  // Output method C action
    }
};

// Class D inheriting from both B and C (Hybrid Inheritance)
class D : public B, public C {
public:
    // Method specific to class D
    void methodD() {
        cout << "Method D called" << endl;  // Output method D action
    }
};

// Main function - entry point of the program
int main() {
    // Demonstrating Single Inheritance
    Dog dog;  // Create a Dog object
    dog.eat();  // Call inherited method from Animal
    dog.bark();  // Call Dog-specific method

    // Demonstrating Multiple Inheritance
    Duck duck;  // Create a Duck object
    duck.fly();  // Call method from FlyingCreature
    duck.swim();  // Call method from SwimmingCreature
    duck.quack();  // Call Duck-specific method

    // Demonstrating Multi-level Inheritance
    Child child;  // Create a Child object
    child.grandParentMethod();  // Call method from GrandParent
    child.parentMethod();  // Call method from Parent
    child.childMethod();  // Call Child-specific method

    // Demonstrating Hierarchical Inheritance
    Circle circle;  // Create a Circle object
    Square square;  // Create a Square object
    circle.draw();  // Call Circle-specific draw method
    square.draw();  // Call Square-specific draw method

    // Demonstrating Hybrid Inheritance
    D d;  // Create a D object
    d.methodA();  // Call method from A through B
    d.methodB();  // Call method from B
    d.methodC();  // Call method from C
    d.methodD();  // Call D-specific method

    return 0;  // End of program
}