/*
Object-Oriented Programming (OOP) is a programming paradigm that revolves around the concept of objects. Objects are instances of classes, which are user-defined data types that encapsulate data and behavior.

The 4 Pillars of OOPs Concept are:
1. Inheritance: Allows a class to inherit properties and behaviors from another class.
2. Polymorphism: Enables objects of different classes to be treated as objects of a common superclass.
3. Encapsulation: Bundles data and methods within a class to hide internal details and provide a well-defined interface.
4. Abstraction: Focuses on exposing only essential features of an object or class while hiding unnecessary details.

Inheritance Example:
class BaseClass {
    // Base class members
};

class DerivedClass : public BaseClass {
    // Derived class inherits from BaseClass
};

Polymorphism Example:
class Shape {
public:
    virtual double getArea() = 0; // Pure virtual function
};

class Rectangle : public Shape {
    double getArea() override {
        // Calculate area of rectangle
    }
};

Encapsulation Example:
class Example {
private:
    int data;

public:
    void setData(int value) {
        data = value;
    }

    int getData() {
        return data;
    }
};

Abstraction Example:
class Vehicle {
public:
    virtual void start() = 0; // Pure virtual function
};

class Car : public Vehicle {
    void start() override {
        // Start the car
    }
};
*/
