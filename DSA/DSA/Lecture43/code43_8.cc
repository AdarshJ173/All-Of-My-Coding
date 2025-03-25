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
    protected:
    int height;
public:
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

class Male : private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }


};

int main(){
    Male m1;
    // cout<<m1.height<<endl;
    cout<<m1.getHeight()<<endl;

    return 0;
}