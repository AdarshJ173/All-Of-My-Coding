#include<iostream>
using namespace std;

int main(){

/// WHILE LOOP

/* /// Absolutely, let's explore while loops in C++ from a first-principles approach:

**1. Repetitive Tasks in Programming**

Imagine you're writing a program to print a pattern of stars (*). You might want to print the same line multiple times to create the design. While loops are ideal for handling such repetitive tasks.

**2. The `while` Loop: A Repeating Machine**

/In C++, the `while` loop is a control flow statement that allows you to execute a block of code repeatedly as long as a certain condition remains true.

**3. Breaking Down the `while` Loop:**

The basic structure of a `while` loop looks like this:

```c++
while (condition) {
  // code to be executed repeatedly
}
```

- **condition:** This is an expression that evaluates to true or false. It's like the question the loop keeps asking itself (e.g., "Is the counter less than 5?").
- **code block:** This is a set of instructions that the program executes repeatedly as long as the `condition` is true. This is like the action the machine performs in each repetition.

**4. Putting it Together:**

Here's an example of a `while` loop that prints a line of 5 stars:

```c++
int count = 1;

while (count <= 5) {
  cout << "*";
  count++;
}

cout << endl;
```

**Thinking from first principles:**

In this example:

- The `while` loop keeps executing the code block as long as `count <= 5` is true.
- Inside the loop:
  - An asterisk (*) is printed.
  - The `count` variable is incremented by 1 using `count++`.
- Once `count` becomes 6, the condition `count <= 5` becomes false, and the loop terminates.
- A newline character (`\n`) is printed outside the loop to move to the next line.

**5. Summary:**

The `while` loop is a powerful tool for creating repetitive behavior in your C++ programs. By using a `while` loop, you can avoid writing the same code multiple times and make your programs more concise and efficient.

*/


int n;
cout<<"Enter any number: "; cin>>n;

int i = 1;
while(i<=n){
    cout<<i<<endl;
    i = i+1;

}

    cout<<"\n";

//! QUESTION : FIND THE SUM FROM 1 TO n
    cout<<"FIND THE SUM FROM 1 TO n"<<endl;

    int c;
    cout<<"Enter any number: "; cin>>c;

    int j = 1;
    int sum = 0;

    while (j<=c){
        sum = sum + j;
        j = j + 1;
    }
    
    cout<<" The sum is: "<<sum<<endl;

    //* FORMULA : n/2(a + l)/

    cout<<"\n";

//! QUESTION : FIND THE SUM of all even numbers FROM 1 TO n
    cout<<"FIND THE SUM of all even numbers FROM 1 TO n"<<endl;

    int d;
    cout<<"Enter any number: "; cin>>d;

    int k = 2;
    int sum2 = 0;

    while(k<=d){
        sum2 = sum2 + k;
        k = k + 2;

        
        if(k%2 == 0){
        sum2 = sum2 + k;
        }
        k = k + 1;
        
    }

    cout<<"The sum of all even numbers is: "<<sum2<<endl;

    cout<<"\n";


//! QUESTION : CONVERT FAHRENHEIT TO CELSIUS
    cout<<"CONVERT FAHRENHEIT TO CELSIUS"<<endl;

    float fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "Temperature in Celsius: " << celsius << endl;

    cout<<"\n";

//! QUESTION : PRIME OR NOT
    cout<<"PRIME OR NOT"<<endl;

    int nom;
    cout<<"Enter any number: "; cin>>nom;

    int l = 2;

    while(l<nom){

        if(nom%l==0){
            cout<<"Not Prime"<<endl;
        }
        else{
            cout<<"Prime for"<< l <<endl;
        }

        l = l + 1;
    }
    


    cout << "PRIME OR NOT" << endl;

    int nom;
    cout << "Enter any number: "; cin >> nom;

    int t = 2;

    int isPrime = 1;

    while (t * t <= nom) {
        if (nom % t == 0) {
            isPrime = 0;
        }
        t++;
    }

    if (isPrime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

}
