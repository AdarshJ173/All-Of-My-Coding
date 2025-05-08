#include <iostream>
#include "Hero.h"

using namespace std;

int main() {
    //creation of object
    Hero aarav;

    //! why? , padding , greedy alignment
    cout << "size of aarav is " << sizeof(aarav) << endl;

    cout << "aarav health is " << aarav.getHealth() << endl;
    aarav.setHealth(70);
    aarav.level = 'A';

    cout << "health is : " << aarav.getHealth() << endl;
    cout << "level is : " << aarav.level << endl;

    return 0;
}