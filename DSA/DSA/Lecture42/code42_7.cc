#include <iostream>
#include "Hero.h"

using namespace std;

int main() {
    cout << Hero::random() << endl;

    //not recommended
    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;
}