#include "Hero.h"
#include <cstring>
#include <iostream>

using namespace std;

int Hero::timeToComplete = 5;

Hero::Hero() {
    cout << "constructor called" << endl;
    name = new char[100];
}

void Hero::print() {
    cout << endl;
    cout << "name: " << this->name << " , ";
    cout << "health " << this->health << " , ";
    cout << "level " << this->level << endl;
    cout << endl;
}

int Hero::getHealth() {
    return health;
}

char Hero::getLevel() {
    return level;
}

void Hero::setHealth(int h) {
    health = h;
}

void Hero::setLevel(char ch) {
    level = ch;
}

Hero::Hero(int health) {
    cout << "this ->" << this << endl;
    this->health = health;
}

Hero::Hero(int health, char level) {
    this->level = level;
    this->health = health;
}

Hero::Hero(Hero &temp ) {
    cout << "deep copy" << endl;
    // Deep Copy: Creating a new memory space and copying the contents of 'temp.name' into it
    char *newName = new char[strlen(temp.name) + 1];
    strcpy(newName, temp.name);
    this->name = newName;

    cout << "Copy constructor called " << endl;
    this->health = temp.health;
    this->level = temp.level;
}

void Hero::setName(char name[]) {
    strncpy(this->name, name, 100);
}

int Hero::random() {
    // static can only access static variables
    // cout<<health<<endl;
    return timeToComplete;
    cout << "static function" << endl;
}

Hero::~Hero() {
    cout << "destructor called" << endl;
    // delete [] name;
}
