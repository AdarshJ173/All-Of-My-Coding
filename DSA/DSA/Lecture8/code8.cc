/// SWITCH & FUNCTIONS

//* SWITCH STATEMENT
/*
FOR EX:
if(){

}
else if(){

}
else if(){

}
else{

}

to write it in more clean way:


switch(exp...){
    case const1 : ------------
        break;
    case const2: -----------
        break;
    default: ----------------

}

*/

#include<iostream>
using namespace std;

int main(){
    int num = 1;
    char ch = '1';

    cout<<endl;

    switch (ch)
    {
    case 1:
        cout << "First"<<endl;
        break;

    case 2:
        cout << "Second"<<endl;
        break;

    case '1': switch (num){
                case 1: cout<<"The Value of num is : " <<num <<endl;
                break;
            }
        // cout<<"Character"<<endl;
        break;
    
    default:
        cout<<"Default case"<<endl;
        break;
    }


    /*
    
    int i = 1;

    while (1)
    {
        cout<<i<<endl;
        i++;
    }

    */

    //? how will u come out of an infinite while loop inside which u have used switch statement , but u cannot use break statement anywhere in the loop. u have to use exit statement. figure out where?

    int aj = 1;

    while (1)
    {
        switch (aj)
        {
        case 1:
            cout<<aj<<endl;
        }
    }
    // exit;

    

}

//* here in case constants { 1,2,'1'} the constants only take integer and character data type & they do not take float/string datatype.

//* when our required condition is satisfied in any of the cases , then after that we dont want the program to further continue itself, and so we want to break it { if the condition is satisfied in any one case then end the program - no need to execute the rest code} ans so we use break; statement. If we dont use it then i will keep executing the rest of the code.


































