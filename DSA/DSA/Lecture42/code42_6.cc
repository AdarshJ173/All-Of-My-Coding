#include <iostream>
#include "Hero.h"

using namespace std;

int main() {
    // Destructor: In C++, a destructor is a special member function of a class that is automatically called when an object goes out of scope or is explicitly deleted. The purpose of a destructor is to release any resources or memory allocated by the object during its lifetime. Destructors are the opposite of constructors, which initialize an object when it is created.

    // Destructors have the same name as the class preceded by a tilde (~). They do not have any return type and do not accept any arguments. When an object is destroyed, either by going out of scope or by being explicitly deleted using the delete keyword, the destructor is called to perform cleanup operations.

    // It is important to define a destructor in a class if the class manages any resources that need to be released when the object is destroyed, such as dynamically allocated memory, file handles, or network connections. Failing to release these resources can lead to memory leaks or resource leaks, causing the program to consume more resources than necessary.

    // If a class does not define a destructor explicitly, C++ provides a default destructor that does nothing. However, if a class requires specific cleanup operations, it is recommended to define a custom destructor to ensure proper resource management.

    //static
    Hero a;

    //dynamic
    Hero *b = new Hero;
    //manually destructor call
    delete b;

    return 0;
}