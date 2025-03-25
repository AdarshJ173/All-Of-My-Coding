/*
Base class member access specifier | Public | Protected | Private
Public--->                         |Public | Protected | private
Protected--->                      |Protected|Protected|Private
Private--->                        |Not Accessible| N/A  | N/A
*/

#include<iostream>
using namespace std;

class  Human
{
public:
    int height;
    int weight;

    private:
    int age;
    
public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human{
// class Male : protected Human{} - constrained by protected inheritance here
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }


};

int main(){
    Male m1;
    cout<<m1.height<<endl;

    return 0;
}