#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>

using namespace std;

class Hero {
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    Hero();
    Hero(int health);
    Hero(int health, char level);
    Hero(Hero &temp); // copy constructor

    void print();
    int getHealth();
    char getLevel();
    void setHealth(int h);
    void setLevel(char ch);
    void setName(char name[]);
    static int random();

    ~Hero(); // Destructor
};

#endif