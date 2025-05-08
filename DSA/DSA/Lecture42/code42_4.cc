#include <iostream>
#include "Hero.h"

using namespace std;

int main() {
    // copy constructor
    Hero AAJ(70, 'C');
    AAJ.print();

    Hero R(AAJ);
    R.print();
}