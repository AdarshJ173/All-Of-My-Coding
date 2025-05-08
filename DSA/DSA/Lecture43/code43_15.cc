/// Polymorphism
// when one thing exists in multiple forms , i.e known as polymorphism 

// compile time polymorphism(static polymorphism) ---> function overloading & operator overloading
// run time polymorphism(dynamic polymorphism ---> 

#include<iostream>
using namespace std;

class A{
    public:

    // function overloading

    void sayHello(){
        cout<<"Hello Adarsh"<<endl;
    }
    
    int sayHello(char name){
        cout<<"hello"<< name<<endl;
        return 1;
    }

    void sayHello(string name){
        cout<<"hello"<< name<<endl;
    }
};

class B{

    // operator overloading

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout<<"output: "<<value2 - value1<<endl;
        cout<<"hello AAJ"<<endl;
    }

    void operator() (){
        cout<<" i am a bracket "<<this->a<<endl;
    }

};

// run time polymorphism(dynamic polymorphism ---> 

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    Dog object;
    object.speak();

    return 0;
}