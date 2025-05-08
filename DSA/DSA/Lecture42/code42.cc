/* 
*Object-Oriented Programming (OOPs) is a programming paradigm that revolves around the concept of objects. Objects are instances of classes, which are user-defined data types that encapsulate data and behavior.

What is OOPs?
- OOPs is a way of designing and modeling software using objects.
- It focuses on organizing code into reusable components (objects) that interact with each other.

Why OOPs?
- OOPs promotes code reusability, modularity, and scalability.
- It helps in modeling real-world entities and relationships effectively.
- Encapsulation, inheritance, and polymorphism are key features that aid in better code organization and maintenance.

How OOPs works?
- Encapsulation: Bundling data (attributes) and methods (functions) that operate on the data within a class.
- Inheritance: Creating new classes (derived classes) based on existing classes (base classes) to promote code reuse.
- Polymorphism: Allowing objects of different classes to be treated as objects of a common superclass, enabling flexibility and extensibility.

Where to use OOPs in C++?
- C++ is a powerful language that fully supports OOPs concepts.
- OOPs is widely used in C++ for developing complex systems, graphical user interfaces, games, and more.

When to use OOPs in C++?
- OOPs is beneficial when dealing with large projects that require organization, maintainability, and extensibility.
- It is suitable for projects where entities can be modeled as objects with properties and behaviors.

object--->instance of class

In summary, OOPs in C++ provides a structured approach to software development by emphasizing objects, classes, and their interactions to build robust and scalable applications.
*/

/*
OOPs (Object-Oriented Programming) is a programming paradigm that revolves around the concept of objects, which are instances of classes. It is a way of writing code that models real-world entities and their interactions. The main principles of OOPs are:

1. **Encapsulation**: This principle is about bundling data and methods that operate on that data within a single unit, called a class. The idea is to hide the internal implementation details and provide a well-defined interface to interact with the class. This helps in achieving data abstraction and code organization.

Example:

*/

class Rectangle {
private:
    double width, height;

public:
    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    double getArea() {
        return width * height;
    }
};

/*

2. **Inheritance**: This principle allows a class to inherit properties and behaviors from another class. The class that inherits is called a derived class (or child class), and the class being inherited from is called a base class (or parent class). This helps in code reusability and establishing a hierarchical relationship between classes.

Example:

*/

class Shape {
protected:
    double x, y;

public:
    void setPosition(double xPos, double yPos) {
        x = xPos;
        y = yPos;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    double getArea() {
        return width * height;
    }
};

/*

3. **Polymorphism**: This principle allows objects of different classes to be treated as objects of a common superclass. It enables writing generic code that can work with different types of objects. Polymorphism can be achieved through method overloading (same method name with different parameters) or method overriding (redefining a method in a derived class).

Example:

*/

class Shape {
public:
    virtual double getArea() = 0; // Pure virtual function
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double getArea() override {
        return 3.14159 * radius * radius;
    }
};

/*

4. **Abstraction**: This principle focuses on hiding the unnecessary details and exposing only the essential features of an object or a class. It helps in managing complexity by providing a simplified and high-level view of the system.

The `why` of OOPs is to develop modular, reusable, and maintainable code by modeling real-world entities and their interactions. It provides a structured approach to software development, making it easier to manage and extend as the complexity grows.

The `how` of OOPs involves defining classes, creating objects (instances of classes), implementing inheritance, utilizing polymorphism, and encapsulating data and methods within classes.

The `where` of OOPs is applicable in various domains and programming languages that support object-oriented principles, such as C++, Java, Python, C#, and more.

The `when` of OOPs is whenever you need to develop software that models real-world entities, requires code reusability, and demands maintainability and extensibility. OOPs is widely used in large-scale software development projects, game development, graphical user interface (GUI) programming, and many other areas.

By following the principles of OOPs, you can write code that is more organized, modular, and easier to understand, maintain, and extend. The use of OOPs concepts can lead to better code quality, improved collaboration among developers, and more efficient software development processes.
*/