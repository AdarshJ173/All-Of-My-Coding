#include <iostream>
#include <cstring>
#include "Hero.h"

using namespace std;

int main() {
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "ADARSH";
    hero1.setName(name);

    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'Q';
    hero1.print();

    // Shallow copy means copying the values of pointers without actually duplicating the memory they point to. This can lead to issues if the original object is modified. To avoid shallow copy, we need to implement a custom copy constructor that performs a deep copy.

    Hero hero3 = hero1; // Deep copy using custom copy constructor
    hero3.print();

    // The copy assignment operator is a special member function in C++ that is used to assign one object to another of the same class. By default, C++ provides a default copy assignment operator that performs a shallow copy. This means it copies the values of the member variables directly without duplicating any dynamically allocated memory. However, in cases where the class contains pointers or dynamically allocated memory, a shallow copy can lead to issues due to multiple objects pointing to the same memory location.

    // To avoid such issues and ensure a proper copy of the object's contents, it is recommended to implement a custom copy assignment operator that performs a deep copy. A deep copy involves creating a new memory space for the copied object and copying the values from the original object to the new memory space. This way, each object has its own independent memory and modifications to one object do not affect the other.

    // The custom copy assignment operator should be defined in the class to handle the specific requirements of copying the object's data. It typically involves allocating new memory, copying values, and releasing any existing resources if necessary. By implementing a custom copy assignment operator, you can ensure proper copying of objects, especially when dealing with complex data structures or dynamic memory allocation.

    hero1 = hero2;
    hero1.print();
    hero2.print();
}