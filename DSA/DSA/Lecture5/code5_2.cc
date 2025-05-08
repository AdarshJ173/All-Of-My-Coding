#include<iostream>
using namespace std;

int main(){
    // Declare two integer variables, a and b, and initialize b with the value 1
    // a is not initialized explicitly, so it has an undefined value initially
    int a, b = 1;

    // Set the value of a to 10
    a = 10;

    // Use an if-else statement to print either the value of b or the incremented value of b
    // depending on the condition in the if statement
    if(++a) // Increment a using the prefix increment operator and evaluate the condition
        cout<< b; // Print the value of b
    else
        cout<< ++b; // Increment b using the prefix increment operator and print its value

    cout<<endl;

/*
The given C++ code is a simple program that uses an if-else statement to print either the value of b or the incremented value of b depending on the condition in the if statement.

Here's a step-by-step breakdown:

The program declares two integer variables, a and b, and initializes b with the value 1. a is not initialized explicitly, so it has an undefined value initially.
The value of a is then explicitly set to 10.
The if statement increments a using the prefix increment operator (++a). This increments a to 11.
The condition in the if statement evaluates the resulting value of a (which is 11). Since 11 is a non-zero value, the condition is true.
As the condition is true, the code inside the if branch is executed, which prints the value of b using cout. Since b is still 1, the output will be 1.
The else branch is not executed in this case, so the increment operation on b is not performed.
In summary, the code prints the value 1 to the console.
*/
///------------------------------------------------------------------
// Declare and initialize two more integer variables, c and d
    int c = 1;
    int d = 2;

    // Use a compound if-else statement to print a message based on the conditions
    // The conditions check if a is greater than 0 and if b is greater than 2
    if(c-- >0 && ++d>2){ // Decrement a using the postfix decrement operator and increment b using the prefix increment operator
        cout<< "Stage 1 - inside if"<<endl;
        cout<<"c: "<<c<<endl;
        cout<<"d: "<<d<<endl;
    }
    else{
        cout<< "Stage 2 - inside else"<<endl;
        cout<<"c: "<<c<<endl;
        cout<<"d: "<<d<<endl;
    }

    cout<<endl;

    // Print the values of c and d
        cout<<"a: "<<c<<endl;
        cout<<"b: "<<d<<endl;

/*
The second part of the code declares and initializes two more integer variables, c and d, with values 1 and 2, respectively.

The code uses a compound if-else statement to print a message based on the conditions. The conditions check if a is greater than 0 and if b is greater than 2. The postfix decrement operator a-- decrements a to 10, and the prefix increment operator ++b increments b to 2. Since a is 10 (greater than 0) and b is 2 (not greater than 2), the conditions are not met, and the code inside the else branch is executed, printing the message "Stage 2 - inside else".

Finally, the code prints the values of c and d, which are 1 and 2, respectively.
*/

///------------------------------------------------------------------
    cout<<endl;

    int number = 3;
    cout<< (25*(++number));

    cout<<endl;
///------------------------------------------------------------------
    cout<<endl;

    int a1 = 1;
    int b1 = a1++;
    int c1 = ++a1;
    cout<<"b1: "<< b1 <<endl;
    cout<<"c1: "<< c1<<endl;

    cout<<endl;
///------------------------------------------------------------------
    cout<<endl;

    
}
