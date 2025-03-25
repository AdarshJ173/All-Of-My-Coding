#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;

int main(){

    char ch1[10];

    cout<<"Enter Your ch1: "; cin>>ch1;
    cout<<ch1<<endl;

    //* Inbuilt char functions

    //length
    int len = strlen(ch1);
    cout<<"The length of ch is: "<<len<<endl<<'\n';

    char ch2[10];
    cout<<"Enter Your ch2: "; cin>>ch2;
    cout<<ch2<<endl;
    //compare
    int comparisonOfChar = strcmp(ch1,ch2);
    cout<<"The comparison of ch1 and ch2 is: "<<comparisonOfChar<<endl<<'\n';
    // not equal  ---> !=0 or -1
    // equal ---> 0

    /*
    if(ans==0){
        cout<<"The two strings are equal"<<endl;
    }
    else{
        cout<<"The two strings are not equal"<<endl;
    }
    */

   //copy

   char ch3[10];
   // strcpy(destination-string,source string)
   strcpy(ch3,ch1);
   cout<<"ch3 is : "<<ch3<<endl;
}