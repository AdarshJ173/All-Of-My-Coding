#include<iostream>
using namespace std;

int main(){

    // Print the program's purpose
    cout<<"PROGRAM: LOWER,UPPER & NUMERIC"<<endl;

    // Add new line characters for better formatting
    cout<<"\n";
    cout<<"\n";

    // Declare a character variable to store user input
    char input;

    // Prompt user for input
    cout<<"Give Input: "; 

    // Read user input
    cin>>input;

    //@ &&
    /* ///Absolutely, let's explore the `&&` operator (logical AND) in C++ from a first-principles approach:

**1. Combining Conditions: AND Operation**

Imagine you're creating a program to check if someone is eligible to vote. There might be two conditions: being of legal voting age (e.g., 18 years old) and being a registered voter. The `&&` operator allows you to combine these conditions.

**2. The `&&` Operator: A Gatekeeper**

In C++, the `&&` operator is the logical AND operator. It's like a gatekeeper that only allows the code block after it to execute if **both** conditions connected by `&&` are true.

**3. Breaking Down the `&&` Operator:**

The `&&` operator works with boolean expressions (expressions that evaluate to true or false). Here's the basic structure:

```c++
condition1 && condition2
```

**Thinking from first principles:**

- The `&&` operator evaluates each condition (condition1 and condition2) from left to right.
- If the first condition is false, the entire expression is considered false, and the code block after `&&` is not executed (short-circuit evaluation). The program basically skips checking the second condition because it already knows the overall result will be false.
- If the first condition is true, the operator proceeds to evaluate the second condition.
- Only if **both** conditions evaluate to true will the entire expression be considered true, and the code block after `&&` is executed.

**4. Putting it Together:**

Here's an example of using `&&` to check voting eligibility:

```c++
int age = 18;
bool isRegistered = true;

if (age >= 18 && isRegistered) {
  cout << "Eligible to vote." << endl;
} else {
  cout << "Not eligible to vote." << endl;
}
```

**Thinking from first principles:**

In this example:

- The `if` statement checks if both `age >= 18` and `isRegistered` are true using `&&`.
- If both conditions are true, the message "Eligible to vote" is printed.
- If either condition is false, the message "Not eligible to vote" is printed.

**5. Summary:**

The `&&` operator is a fundamental tool for combining conditions in C++. It allows you to create more complex decision-making logic in your programs by ensuring that multiple conditions are met before proceeding.
    
    */

    // Check if input is a lowercase letter
    if(input>='a' && input<='z'){
        // Print the result
        cout<<"The Input is in lower Case"<<endl;
    }

    // Check if input is an uppercase letter
    else if(input>='A' && input<='Z'){
        // Print the result
        cout<<"The Input is in Upper Case"<<endl;
    }

    // Check if input is a numeric value
    else if(input>='0' && input<='9'){
        // Print the result
        cout<<"The Input is Numeric"<<endl;
    }

    //@ ||
    /*/// Absolutely, let's explore the `||` operator (logical OR) in C++ from a first-principles approach:

**1. Combining Conditions: OR Operation**

Imagine you're creating a program to grant access to a website. There might be two ways to qualify for access: being a registered user or having a guest pass. The `||` operator allows you to combine these conditions.

**2. The `||` Operator: A Gatekeeper**

In C++, the `||` operator is the logical OR operator. It's like a gatekeeper that allows the code block after it to execute if **at least one** condition connected by `||` is true.

**3. Breaking Down the `||` Operator:**

The `||` operator works with boolean expressions (expressions that evaluate to true or false). Here's the basic structure:

```c++
condition1 || condition2
```

**Thinking from first principles:**

- The `||` operator evaluates each condition (condition1 and condition2) from left to right.
- If the first condition is true, the entire expression is considered true, and the code block after `||` is executed (short-circuit evaluation). The program basically skips checking the second condition because it already knows the overall result will be true.
- The operator only proceeds to evaluate the second condition if the first condition is false.
- If **at least one** condition evaluates to true, the entire expression is considered true, and the code block after `||` is executed.

**4. Putting it Together:**

Here's an example of using `||` to check website access:

```c++
bool isRegisteredUser = false;
bool hasGuestPass = true;

if (isRegisteredUser || hasGuestPass) {
  cout << "Granted access." << endl;
} else {
  cout << "Access denied." << endl;
}
```

**Thinking from first principles:**

In this example:

- The `if` statement checks if `isRegisteredUser` or `hasGuestPass` (or both) is true using `||`.
- Since `hasGuestPass` is true, the overall condition is true, and the message "Granted access" is printed.
- Even if `isRegisteredUser` were also true, the program wouldn't check it because the first condition was already enough for access.

**5. Summary:**

The `||` operator is a fundamental tool for combining conditions in C++. It allows you to create more complex decision-making logic in your programs by checking if any of the multiple conditions are met.
    
    */

    // Check if input is a mix of all types
    else if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z') || (input >= '0' && input <= '9')){
        // Print the result
        cout << "It's a Mix of all" << endl;
    } // This condition is unnecessary and will never be true, as it is already covered by the previous conditions

    // Print an error message for invalid input
    else{
        cout<<"Invalid Input";
    }

}

//@ "<<" and ">>" 
/* /// Absolutely, let's explore the `<<` and `>>` operators in C++ from a first-principles approach:

**1. Working with Streams in C++**

Imagine you have data in your C++ program, and you want to either send it out (like displaying it on the screen) or bring data in from an external source. C++ uses streams to handle this flow of information.

**2. The `<<` and `>>` Operators: Stream Inserters and Extractors**

In C++, the `<<` (insertion) and `>>` (extraction) operators are used for data manipulation with streams. They work with objects of stream classes like `cout` (standard output stream) and `cin` (standard input stream).

**Thinking from first principles:**

- **`<<` (Insertion Operator):** This operator sends data to an output stream. Imagine you have a value in a variable, and you use `<<` to push that value onto the output stream, like pushing an item onto a conveyor belt. The data will eventually be delivered to the destination connected to the stream (e.g., the console window).

Here's an example:

```c++
int age = 25;
cout << "Age: " << age << endl;
```

In this example:

  - `cout << "Age: " << age << endl;` sends the string "Age: ", the value of `age`, and a newline character to the `cout` stream, which typically displays them on the console.

- **`>>` (Extraction Operator):** This operator retrieves data from an input stream. Imagine you have a conveyor belt bringing in data, and you use `>>` to extract that data from the input stream and store it in a variable, like taking an item off the conveyor belt.

Here's an example:

```c++
int number;
cout << "Enter a number: ";
cin >> number;
```

In this example:

  - `cin >> number;` extracts the user-entered value from the `cin` stream (which typically reads from the keyboard) and stores it in the `number` variable.

**3. Important Points:**

  - The `<<` and `>>` operators can be used with various data types (integers, characters, strings, etc.) depending on the context and stream types.
  - C++ offers other stream objects and manipulators for more advanced input/output operations.

**In essence, the `<<` and `>>` operators are fundamental tools for sending data out (insertion) and bringing data in (extraction) using streams in C++ programs.**

*/