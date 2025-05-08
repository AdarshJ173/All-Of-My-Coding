/// CONDITIONALS & LOOPS

/* //*Conditional statements and loops are fundamental building blocks for any programming language, and C++ is no exception. Let's break them down using a first-principles approach:

**Conditionals**

* Imagine you're following a recipe. At certain points, you need to make decisions based on conditions. For example, "If the cake is golden brown, take it out of the oven."
* In C++, conditional statements allow your program to make similar decisions. They check a condition and execute different code blocks based on whether the condition is true or false.

  * **Types of conditionals:**
      * `if` statement: This is the most basic conditional statement. It checks a condition and executes a block of code if the condition is true.
      * `if-else` statement: This allows you to execute different code blocks depending on whether the condition is true or false.
      * `if-else if` statement: This lets you check multiple conditions and execute corresponding code blocks.

**Loops**

* Imagine you need to repeat a task multiple times in your recipe, like whisking the batter for 2 minutes. Loops allow your program to perform repetitive tasks efficiently.
* In C++, loops execute a block of code repeatedly until a certain condition is met.

  * **Types of loops:**
      * `for` loop: This is often used when you know exactly how many times you want to repeat the code block.
      * `while` loop: This loop continues to execute the code block as long as a certain condition remains true.
      * `do-while` loop: This loop executes the code block at least once, then continues as long as a condition is true.

**How conditionals and loops work together:**

* Conditionals can be used to control loops. For example, you can use a loop to keep asking for user input until they enter a valid value.
* Loops can be used within conditionals to create more complex logic.

**Benefits of using conditionals and loops:**

* **Reduced redundancy:**  You can avoid writing the same code repeatedly.
* **Improved readability:**  Your code becomes more organized and easier to understand.
* **Flexibility:**  You can create programs that adapt to different situations.

By mastering conditionals and loops, you can create C++ programs that make decisions, repeat tasks, and interact with users in more sophisticated ways.

*/

/*
*CONDITIONALS
Conditionals in C++ are statements that allow you to perform different actions based on whether a certain condition is true or false. The most common conditional statements in C++ are:

if statement: This statement checks whether a certain condition is true and executes a block of code if it is.
if-else statement: This statement checks whether a certain condition is true and executes one block of code if it is, and another block of code if it is not.
if-else-if ladder: This statement checks whether a series of conditions are true and executes a different block of code for each condition that is true.
switch statement: This statement checks whether a certain value matches one of several cases and executes a block of code for the matching case.
Here are some examples of each type of conditional statement:

*/



# include<iostream>
using namespace std;

/*
 * #include<iostream>: This line is a preprocessor directive that includes the iostream header file. This file provides declarations for standard input and output operations in C++, allowing you to use objects like cin for input and cout for output.

* using namespace std;: This line introduces the std namespace into the current scope. The std namespace is where the standard C++ library functions and objects are defined, including cout, cin, and other standard features. By using this line, you can directly access these objects without needing to prefix them with std::.
These two lines are commonly used at the beginning of a C++ program to enable input and output operations and simplify the usage of standard library components.
*/

int main(){

//@ if statement:

/* //*Absolutely, let's explore the `if` statement in C++ using a first-principles approach:

**1. Making Decisions in a Program**

Imagine you're writing a recipe. At certain points, you need to make choices based on conditions. For instance, "If the cake is golden brown, take it out of the oven."

**2. The `if` Statement: A Decision Point**

In C++, the `if` statement is a fundamental tool for making decisions in your program. It allows you to check a condition and execute a block of code only if that condition is true.

**3. Breaking Down the `if` Statement:**

The basic structure of an `if` statement looks like this:

```c++
if (condition) {
  // code to execute if the condition is true
}
```

- **condition:** This is an expression that evaluates to either true or false. It's like the question you're asking in your recipe (e.g., "Is the cake golden brown?").
- **code block:** This is a set of instructions that the program will only execute if the `condition` is true. It's like the action you take based on the answer (e.g., "Take the cake out of the oven").

**4. Putting it Together:**

Here's an example of an `if` statement in C++ that checks if a number is positive:

```c++
int number = 5;

if (number > 0) {
  cout << "The number is positive." << endl;
}
```

In this example:

- The `condition` is `number > 0`.
- If the `condition` is true (because `number` is 5, which is greater than 0), the code block inside the curly braces is executed, printing the message "The number is positive."

**5. Summary:**

The `if` statement is a powerful tool for controlling the flow of your C++ program based on conditions. It allows you to create programs that can make decisions and behave differently depending on the circumstances.

*/

int x = 10;
if (x > 5) {
  cout << "x is greater than 5"<< endl;
}

//@ if-else statement:

/* //*Absolutely, let's explore the `if-else` statement in C++ using a first-principles approach:

**1. Making Decisions in a Program**

Imagine you're writing a recipe. At certain points, you need to make choices based on conditions. For instance, "If the cake is golden brown, take it out of the oven. Otherwise, leave it in for a few more minutes."

**2. The `if-else` Statement: Two Sides of the Coin**

In C++, the `if-else` statement is a fundamental tool for making decisions in your program. It allows you to check a condition and execute one block of code if the condition is true, and another block of code if the condition is false.

**3. Breaking Down the `if-else` Statement:**

The basic structure of an `if-else` statement looks like this:

```c++
if (condition) {
  // code to execute if the condition is true
} else {
  // code to execute if the condition is false
}
```

- **condition:** This is an expression that evaluates to either true or false. It's like the question you're asking in your recipe (e.g., "Is the cake golden brown?").
- **code block (if true):** This is a set of instructions that the program will only execute if the `condition` is true. It's like the action you take if the cake is golden brown (e.g., "Take the cake out of the oven").
- **code block (else):** This is a set of instructions that the program will execute if the `condition` is false. It's like the action you take if the cake is not golden brown yet (e.g., "Leave it in for a few more minutes").

**4. Putting it Together:**

Here's an example of an `if-else` statement in C++ that checks if a number is positive or negative:

```c++
int number = -3;

if (number > 0) {
  cout << "The number is positive." << endl;
} else {
  cout << "The number is non-positive." << endl;
}
```

In this example:

- The `condition` is `number > 0`.
- Since the `condition` is false (because `number` is -3), the code block inside the `else` curly braces is executed, printing the message "The number is non-positive."

**5. Summary:**

The `if-else` statement is a powerful tool for creating more complex decision-making logic in your C++ programs. It allows you to handle different scenarios based on the results of conditions.

*/

int y = 10;
if (y > 5) {
  cout << "y is greater than 5"<< endl;
} else {
  cout << "y is not greater than 5"<< endl;
}

//@ if-else-if ladder:

/* //*Absolutely, let's explore `if-else-if` ladders in C++ using a first-principles approach:

**1. Making Multiple Decisions in a Program**

Imagine you're writing a program to determine what grade a student received based on their exam score. There can be multiple conditions (scores) that lead to different grades (outcomes).

**2. The `if-else-if` Ladder: A Chain of Decisions**

In C++, the `if-else-if` ladder allows you to create a series of conditions to check. The program executes the code block associated with the first true condition it encounters.

**3. Breaking Down the `if-else-if` Ladder:**

The structure looks like this:

```c++
if (condition1) {
  // code to execute if condition1 is true
} else if (condition2) {
  // code to execute if condition1 is false and condition2 is true
} else if (condition3) {
  // code to execute if both condition1 and condition2 are false and condition3 is true
}
// ... you can have more else if blocks ...
else {
  // code to execute if none of the conditions are true
}
```

- **condition1, condition2, condition3:** These are expressions that evaluate to true or false. They represent the different scenarios you want to check.
- **code blocks:** Each `if` or `else if` block contains the code to execute if the corresponding condition is true.
- **else block (optional):** This block is executed if none of the preceding conditions are true. It's like a default case.

**4. Putting it Together:**

Here's an example of an `if-else-if` ladder that determines a student's grade based on their score:


int score = 85;

if (score >= 90) {
  cout << "Grade: A" << endl;
} else if (score >= 80) {
  cout << "Grade: B" << endl;
} else if (score >= 70) {
  cout << "Grade: C" << endl;
} else {
  cout << "Grade: D or F" << endl;
}


In this example:

- The conditions check if the score is greater than or equal to specific thresholds.
- The first true condition (`score >= 80`) is met, so the program prints "Grade: B".

**5. Summary:**

The `if-else-if` ladder is a powerful tool for handling multiple conditions and executing code based on the first true condition. It allows you to create more nuanced logic in your C++ programs.

*/

int z = 10;
if (z > 15) {
  cout << "z is greater than 15"<< endl;
} else if (x > 5) {
  cout << "z is greater than 5 but less than or equal to 15"<< endl;
} else {
  cout << "z is less than or equal to 5"<< endl;
}

//@ else
/* //*Absolutely, let's explore the `else` statement in C++ using a first-principles approach:

**1. Making Decisions in a Program**

Imagine you're writing a program to check if someone is eligible to vote. There's a specific age requirement to meet (condition).

**2. The `else` Statement: The Other Side of the Coin**

In C++, the `else` statement is used in conjunction with the `if` statement to create a decision-making block. It allows you to define what happens if the condition in the `if` statement is not true (false).

**3. Breaking Down the `if-else` Statement:**

The basic structure looks like this:

```c++
if (condition) {
  // code to execute if the condition is true
} else {
  // code to execute if the condition is false
}
```

- **condition:** This is an expression that evaluates to either true or false. It's like the question you're asking in your program (e.g., "Is the person old enough to vote?").
- **code block (if true):** This is a set of instructions that the program will only execute if the `condition` is true. It's like the action you take if the condition is met (e.g., "Grant them permission to vote").
- **code block (else):** This is a set of instructions that the program will execute if the `condition` is false. It's like the action you take if the condition is not met (e.g., "Inform them they are not eligible").

**4. Putting it Together:**

Here's an example of an `if-else` statement that checks if someone is old enough to vote (assuming the voting age is 18):

```c++
int age = 17;

if (age >= 18) {
  cout << "You are eligible to vote." << endl;
} else {
  cout << "You are not old enough to vote." << endl;
}
```

In this example:

- The `condition` is `age >= 18`.
- Since the `condition` is false (because `age` is 17), the code block inside the `else` curly braces is executed, printing the message "You are not old enough to vote."

**5. Summary:**

The `else` statement is a fundamental tool for creating more comprehensive decision-making logic in your C++ programs. It allows you to handle both scenarios: when the condition is true and when it's false.
*/

//@ switch statement:

/* //* Absolutely, let's explore the `switch` statement in C++ using a first-principles approach:

**1. Making Multi-Way Decisions**

Imagine you're writing a program for a vending machine. The user can select different products (conditions), and the machine needs to dispense the corresponding item (action).

**2. The `switch` Statement: A Multi-Option Branch**

In C++, the `switch` statement allows you to efficiently handle multiple conditions and execute code based on the matching condition. It's like a branching decision tree in your program.

**3. Breaking Down the `switch` Statement:**

The basic structure looks like this:

```c++
switch (expression) {
  case value1:
    // code to execute if expression equals value1
    break;
  case value2:
    // code to execute if expression equals value2
    break;
  // ... you can have more case blocks ...
  default:
    // code to execute if none of the cases match
}
```

- **expression:** This is an integer or character expression that will be evaluated. It's like the question being asked in your program (e.g., "What product did the user select?").
- **case value1, case value2:** These represent different possible values that the `expression` can evaluate to. They are like the different product buttons on the vending machine.
- **code block (case):** The code block associated with a `case` value is executed if the `expression` matches that value. This is like dispensing the chosen product.
- **break:** This statement is optional but generally used after each `case` block. It tells the program to exit the `switch` statement after executing the code for the matched case.
- **default (optional):** This block is executed if the `expression` value doesn't match any of the `case` values. It's like a default message on the vending machine if an invalid button is pressed.

**4. Putting it Together:**

Here's an example of a `switch` statement that simulates a simple calculator for basic operations:

```c++
char operator = '+';
int num1 = 5, num2 = 3;

switch (operator) {
  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;
  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;
  default:
    cout << "Invalid operator." << endl;
}
```

In this example:

- The `expression` is `operator`.
- The `case` values match specific characters (+ or -).
- The corresponding code block performs the calculation and prints the result if a matching operator is found.
- The `default` block handles invalid operators.

**5. Summary:**

The `switch` statement is a powerful tool for handling multiple conditions and executing code efficiently based on the first matching condition. It can improve readability and maintainability of your C++ programs when dealing with multiple branching decisions. 
*/

int w = 10;
switch (w) {
  case 5:
    cout << "w is 5"<< endl;
    break;
  case 10:
    cout << "w is 10"<< endl;
    break;
  default:
    cout << "w is not 5 or 10"<< endl;
    break;
}
/*
It's important to note that the break statement is used to exit the switch statement once a matching case has been found. If the break statement is not used, the code will continue to execute the next case even if the current case has already been matched.
*/

/*
*What is cin in C++?

/Absolutely, let's explore `cin` in C++ from a first-principles approach:

**1. Input in C++ Programs:**

Imagine your C++ program needs information from the user. This information could be anything from numbers and text to making choices. `cin` is a fundamental tool for getting this user input.

**2. `cin` as an Input Stream:**

Think of `cin` as a special lane or channel in your program designed specifically to receive data entered by the user, typically from the keyboard. It's like a designated spot where the user "types in" information.

**3. Using `cin` for Input:**

  - `cin` is an object of the `iostream` class in C++.
  - You typically use the extraction operator `>>` along with `cin` to read data entered by the user and store it in variables.

Here's an example:

```c++
int age;
cout << "Enter your age: ";
cin >> age;

cout << "You entered: " << age << endl;
```

In this example:

  - The line `cin >> age;` extracts the user-entered value and stores it in the `age` variable.

**4. What `cin` Can Read:**

  - `cin` can be used with different data types to read various kinds of user input:
      - Numbers (integers, floats)
      - Characters
      - Strings (sequences of characters)

**5. Important Points:**

  - Make sure to prompt the user with a clear message using `cout` before using `cin` to indicate what kind of input is expected.
  - `cin` might encounter errors if the user enters an unexpected data type (e.g., entering text when a number is expected). You can explore error handling techniques in C++ to make your programs more robust in such cases.

**In essence, `cin` is a way for your C++ program to receive input from the user, allowing for interaction and information gathering.**

cin is a predefined object in C++ that is used to read input from the standard input device, which is usually the keyboard. It is an object of the istream class, which is a part of the C++ Standard Library.

*Name and Meaning
The name cin is derived from "character input". It is used to extract characters from the input stream and store them in variables.

*Purpose
The primary purpose of cin is to allow the program to interact with the user by reading input from the keyboard. It provides a way to get input from the user and store it in variables, which can then be used in the program.

*How it Works
cin uses the extraction operator >> to extract characters from the input stream and store them in variables. The extraction operator is overloaded for various data types, such as integers, floating-point numbers, characters, and strings, allowing cin to read input of different types.

*Buffering
cin uses a buffer to store the input characters. The buffer is a temporary storage area that holds the input characters until they are extracted and stored in variables. The buffer is flushed when the input is extracted, and it is refilled when the next input is read.

*Error Handling
cin has built-in error handling mechanisms. If an error occurs during input, such as when the user enters invalid input, cin sets an error flag and stops reading input. The program can then check the error flag and take appropriate action to handle the error.

*Synchronization
cin is synchronized with the C standard input library, which means that it is compatible with C-style input functions such as scanf. This allows C++ programs to use both cin and C-style input functions interchangeably.

*Global Object
cin is a global object, which means that it is available throughout the program and can be used anywhere. It is defined in the <iostream> header file, which must be included in the program to use cin.

*In summary, cin is a powerful and flexible input object in C++ that provides a way to read input from the user and store it in variables. Its built-in error handling and synchronization with C-style input functions make it a convenient and reliable way to interact with the user.

*/

   int num;
   cout<<"Input a number: "; cin>>num; 
   // cout<<num <<endl;

   if(num>0){
    cout<< num << " is positive"<<endl;
    // cout<<"num is +ve"<<endl;
   }
   else if(num<0){
    cout<< num << " is negative"<<endl;
    // cout<<"num is -ve"<<endl;
   }


   int num1,num2;
   cout<<"Enter the 1st num: "; cin>> num1 ; cout<<"Enter the 2nd num: "; cin>> num2;
   cout<<"Value of num1 and num2 is : "<<num1<<" & "<<num2<<endl;

/*
*What is cin.get() in C++?

/Absolutely, let's explore `cin.get()` in C++ from a first-principles approach:

**1. Character Input in C++**

Imagine your C++ program needs to get a single character as input from the user. This could be for various purposes, like reading a key press or getting a specific character from the user. `cin.get()` is a function specifically designed for this task.

**2. `cin.get()` for Character Input**

Think of `cin.get()` as a special function that retrieves a single character from the user's input stream (`cin`) and stores it in a variable. It's like a small scoop that gets just one character out of the data the user entered.

**3. Using `cin.get()` for Input:**

  - `cin.get()` is a function from the `iostream` library in C++.
  - You typically use it with a character variable to store the retrieved character.

Here's an example:

```c++
char initial;
cout << "Enter your first initial: ";
cin.get(initial);

cout << "You entered: " << initial << endl;
```

**Thinking from first principles:**

In this example, we can break down how `cin.get()` works:

1. The program prompts the user to enter their first initial using `cout`.
2. The line `cin.get(initial)` instructs the program to:
   - Use `cin` (the input stream) as the source.
   - Call the `get()` function associated with `cin`.
   - Store the retrieved character (the first initial entered by the user) in the `initial` variable (which is of type `char`).
3. Finally, `cout` is used again to display the entered character.

**4. Important Points:**

  - `cin.get()` reads only one character, including the newline character (`\n`) entered by the user when pressing the Enter key. You might need to handle this newline character appropriately depending on your program's logic.
  - `cin.get()` can be used with other data types like `string` to read a limited number of characters from the user input stream.

**In essence, `cin.get()` is a way for your C++ program to read a single character from the user's input stream, providing a way to get specific character-based input.**

cin.get() is a member function of the istream class in C++, which is used to read a single character from the input stream. It is often used in conjunction with cin to read input from the user.

*Purpose
The primary purpose of cin.get() is to read a single character from the input stream and discard it. This can be useful in situations where the program needs to read a single character, such as when reading input from the user and waiting for the user to press the Enter key.

*How it Works
cin.get() reads a single character from the input stream and discards it. It does not store the character in a variable, but it can be used in conjunction with other input functions to read and store input.

*Buffering
cin.get() uses the same buffer as cin. When cin.get() is called, it reads a character from the buffer and discards it. If the buffer is empty, cin.get() waits for the user to enter input and fills the buffer with the input characters.

*Error Handling
cin.get() has built-in error handling mechanisms. If an error occurs during input, such as when the user enters invalid input, cin.get() sets an error flag and stops reading input. The program can then check the error flag and take appropriate action to handle the error.

*Synchronization
cin.get() is synchronized with the C standard input library, which means that it is compatible with C-style input functions such as scanf. This allows C++ programs to use both cin.get() and C-style input functions interchangeably.

*Global Object
cin.get() is a member function of the istream class, which is a global object in C++. This means that it is available throughout the program and can be used anywhere. It is defined in the <iostream> header file, which must be included in the program to use cin.get().

*In summary, cin.get() is a member function of the istream class in C++ that is used to read a single character from the input stream and discard it. It is often used in conjunction with cin to read input from the user and wait for the user to press the Enter key. Its built-in error handling and synchronization with C-style input functions make it a convenient and reliable way to read input from the user.
*/

///---------------------------------------------------------------------------------------------------------------------------------------------

   int cg;
   cg = cin.get();
   cout<<"The Value of cg is "<<cg<<endl;

   cout<<"\n";
   cout<<"\n";

///---------------------------------------------------------------------------------------------------------------------------------------------
    //! - PROGRAM TO FIND WHICH IS A GREATER NUMBER
    cout<<"PROGRAM TO FIND WHICH IS A GREATER NUMBER"<<endl;

    int n1,n2;
    cout<<"Enter the Value of n1: "; cin>>n1;
    cout<<"Enter the Value of n2: "; cin>>n2;

    if(n1>n2){
        cout<<"n1 is greater than n2";
    }
    else { // else if(n2>n1){}
        cout<<"n2 is greater than n1";
    }

///---------------------------------------------------------------------------------------------------------------------------------------------

    cout<<"\n";
    cout<<"\n";

    //! - PROGRAM TO FIND if the input integer is +VE,-VE & 0
    cout<<"PROGRAM TO FIND if the input integer is +VE,-VE & 0"<<endl;

    int in1;
    cout<<"Enter any Integer Number: "; cin>>in1;

    if(in1>0){
        cout<<in1<<" is +ve";
    }

    else if(in1<0){
        cout<<in1<<" is -ve";
    }

    else{ 
        cout<<in1<<" is 0";
    }

    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    //! - QUESTION-1 ?

    int aj = 9;

    if(aj == 9){
        cout<<"Nine"<<endl;
    }

    if(aj>0){
        cout<<"positive"<<endl;
    }

    else{
        cout<<"negative"<<endl;
    }
    //* In the above program , as we can see both the if conditions are satisfied therefore it outputs nine & positive both.
    //* If i use else if in the place of the 2nd if statement then , the program would be satisfied in the first if and then end the program.


    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

}
