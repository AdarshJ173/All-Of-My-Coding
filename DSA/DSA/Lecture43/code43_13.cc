/// Types of Inheritance
// -> Single
// -> Multi-level
// -> Multiple
// -> Hybrid
// -> Hierarchical

//@ -> Hierarchical
#include<iostream>
using namespace std;

class A{

    public:
    void func1(){
        cout<<"inside function 1"<<endl;
    }
};

class B : public A{
    public:
    void func2(){
        cout<<"inside function 2"<<endl;
    }
};

class C : public A {
    public:
    void func3(){
        cout<<"inside function 3"<<endl;
    }
};

int main(){

    A obj1;
    obj1.func1();

    cout<<endl;

    B obj2;
    obj2.func1();
    obj2.func2();
    
    cout<<endl;

    C obj3;
    obj3.func1();
    // obj3.func2(); -  no relation of B & C;
    obj3.func3();

    return 0;
}