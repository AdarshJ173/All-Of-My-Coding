#include <iostream>
#include "Hero.h"

using namespace std;

int main() {
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    // dynamically
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;
}