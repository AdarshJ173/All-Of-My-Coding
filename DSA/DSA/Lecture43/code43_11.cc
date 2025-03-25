/// Types of Inheritance
// -> Single
// -> Multi-level
// -> Multiple
// -> Hybrid
// -> Hierarchical

//@ -> Multi-level
#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal{

};

class GermanShepherd: public Dog{

};

int main(){
    Dog GermanShepherd;
    GermanShepherd.speak();
    cout<<GermanShepherd.age<<endl;

    return 0;
}