#include<iostream>
using namespace std;

class student{

    string name;
    public:

    int age;
    bool gender;

    // Default Constructor
    student(){
        cout<<"Default Constructor"<<endl;
    }

    // Parameterized Constructor
    student(string s,int a,int g){
        cout<<"Parameterized Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    // Copy Constructor
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name  = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printinfo(){

        cout<<"Name : ";
        cout<<name<<endl;
        cout<<"Age : ";
        cout<<age<<endl;
        cout<<"Gender : ";
        cout<<gender<<endl;

    }

    bool operator == (student &a){
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }

};

int main(){

    student a("Urvi",20,1);
    // a.getName();
    // a.printinfo();

    student b("Rahul",21,0);

    student c = a; //copy constructor

    if (b == a)
    {
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    

return 0;
}
