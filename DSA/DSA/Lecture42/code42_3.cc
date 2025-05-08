#include <iostream>
#include "Hero.h"

using namespace std;

int main() {
    //object created statically
    Hero aarnvy(10);
    cout << "Address of aarnvy is " << &aarnvy << endl;
    aarnvy.getHealth();
    aarnvy.print();

    Hero *h = new Hero(11);
    h->print();

    Hero temp(22, 'B');
    temp.print();

    return 0;
}