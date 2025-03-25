/// Types of Inheritance
// -> Single
// -> Multi-level
// -> Multiple
// -> Hybrid
// -> Hierarchical

#include<iostream>
using namespace std;

// inheritance ambiguity
class A{
    public:
    void func(){
        cout<<" i am A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"i am B"<<endl;
    }
};

class C : public A, public B{

};

int main(){

    C obj;
    // obj.func();

    obj.A::func();
    obj.B::func();

    return 0;
}
