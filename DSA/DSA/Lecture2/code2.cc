#include<iostream>
/* //*Absolutely, let's break down `#include<iostream>` in C++ using a first principles approach:

**1. The Preprocessor:**

- Imagine your C++ program as a recipe. Before you start cooking (compiling), there might be some prep work to do.
- The `#include` directive is like an instruction for a preprocessor, a separate program that runs before the actual compilation.
- The preprocessor's job is to follow these instructions to get everything ready for the compiler.

**2. Including Files:**

- Think of `#include` as saying, "Hey preprocessor, go get some additional instructions from another file."
- These other files are called header files, and they contain pre-written definitions and instructions that you can use in your program.

**3. iostream for Input/Output:**

- The `<iostream>` part specifies the name of a particular header file.
- In C++, `iostream` is a special header file that contains definitions for essential input and output operations.
- These operations are like the tools you use in the kitchen: a spoon for mixing (taking input), a measuring cup (providing output), and so on.

**4. C++ Streams:**

- C++ uses a concept called streams to handle input and output.
- A stream is like a continuous flow of data, similar to how water flows through a pipe.
- `iostream` provides objects like `cin` (for standard input, like the keyboard) and `cout` (for standard output, like the console) to interact with these streams.

**5. Putting it Together:**

///- By including `iostream`, you're essentially saying, "I want to use the pre-defined tools for input and output operations in my C++ program."
///- This allows you to use statements like `cin >>` (to read input) and `cout <<` (to write output) in your code, making your program interactive.

**In essence, `#include<iostream>` is like saying, "Give me the necessary tools to get data in and out of my C++ program!"**

*/
// Include the iostream standard library to allow for input-output operations

using namespace std;
/* //*Absolutely, let's break down `using namespace std;` in C++ using a first principles approach:

///BoilerPlate Code

**1. Namespaces and Organization:**

- Imagine a large kitchen with many tools and ingredients. To avoid confusion, it's helpful to organize them.
- In C++, namespaces are like labeled sections in a kitchen. They group related things together.

**2. The Standard Library Namespace:**

- C++ has a vast collection of pre-written code called the standard library.
- This library includes functions, objects, and other helpful tools for common tasks.
- The `std` namespace is a special container that holds all these standard library goodies.

**3. Using the Standard Library:**

- To use items from the standard library in your code, you typically need to specify their namespace.
- For example, `std::cout` refers to the `cout` object for standard output, which is part of the `std` namespace.

**4. The `using namespace std;` Shortcut:**

- The line `using namespace std;` is a shortcut that brings all the names from the `std` namespace into your current code scope.
///- This means you can use things like `cout` without having to write `std::cout` all the time.
/- It's like saying, "Hey, I'm going to be using a lot of tools from the standard library section of the kitchen, so I'll keep them close by."

**5. But Why Use Caution?**

- While convenient, using `using namespace std;` can sometimes cause confusion.
- Imagine if everything in the kitchen was dumped on one counter. It might be hard to find what you need, especially if you have other tools with similar names.
- In C++, if you use multiple libraries or have custom code with similar names, `using namespace std;` can lead to naming conflicts.

**In essence, `using namespace std;` is a shortcut to save typing, but use it with caution to avoid confusion in your code.**
*/
// Bring the standard library into scope to avoid having to prefix standard library elements with std::

int main(){
/* //*Absolutely, let's break down `int main(){}` in C++ using a first principles approach:

**1. Building Blocks of a Program:**

- Imagine a program as a set of instructions for a machine to follow, like a recipe for a computer.
- These instructions are written in a specific language that the machine can understand, like C++.

**2. The `main` Function:**

- Every C++ program needs a starting point, like the first step in a recipe.
- In C++, the `main` function is the special entry point where your program's execution begins.
- It's like the first line in your recipe that says, "Let's start cooking!"

**3. The `int` Return Type:**

- The `int` before `main` indicates that the `main` function returns an integer value.
- Think of this integer as a way for your program to signal if it ran successfully or not.
- In C++, a return value of 0 typically indicates successful execution.

**4. The Empty Braces `{}`:**

- The curly braces `{}` define the scope of the `main` function's body.
- This is where you put all the instructions (code) that your program needs to execute.
- It's like the body of your recipe that contains all the steps for making the dish.

**5. Putting it Together:**

/- `int main() {}` essentially says, "This is the starting point of my program. It's a function called `main` that returns an integer and has its instructions here (between the curly braces)."

**In essence, `int main(){}`` is the foundation of your C++ program. It's the starting point where you tell the computer what instructions to follow to get your program running.**
*/
    // Main function where program execution begins

    //@ cout<<>>;
    /* //*Let's break down `cout << >>` in C++ using a step-by-step approach:

**1. Building Blocks:**

- Imagine a program as a series of instructions to perform a task. C++ is a language for writing these instructions.
- In C++, statements are like individual instructions that tell the computer to do something specific.

**2. `cout` - The Output Stream:**

- Think of `cout` as a special tool  that allows you to communicate information out of your program.
- In C++, it's an object connected to the standard output stream, which is typically the console or terminal where you see program results.

**3. The Insertion Operator (<<):**

- The `<<` symbol acts like a bridge. It takes the information you provide and inserts it into the output stream.
- Imagine you have data (like text or numbers) and `cout` is a speaker. The `<<` operator helps you send that data to the speaker for it to be broadcast (displayed) on the console.

**4. Putting it Together:**

- `cout << some_data`  combines these elements. It tells the program to use `cout` (the output tool) and the `<<` operator (the bridge) to send `some_data` (the information you provide) to the standard output stream (typically the console).

**In essence, `cout << >>` is a way to send information (text, numbers, etc.) out of your program and display it on the console.**

Here's an analogy:

- Imagine writing a letter. `cout` is like the envelope you use to send the letter, and the `<<` operator is like placing the content (your message) inside the envelope. The recipient (console) receives the envelope and reads the message inside.

/Understanding cin in C++
What is cin?

cin is an object in C++ that stands for "character input." It is part of the standard input/output library (<iostream>) and is used to read data from the standard input device, typically the keyboard.
Streams in C++:

C++ uses a concept called streams to handle input and output. A stream is a flow of data. In this context, cin represents an input stream where data can be read from.
Just like you can pour water from a jug into a glass, you can take input from the keyboard and store it in variables using cin.
Using cin:


To use cin, you typically use the extraction operator (>>). This operator takes the input from the cin stream and stores it in a variable.
For example:
cpp
Insert Code
Edit
Copy code
int age;
cout << "Enter your age: ";
cin >> age; // Reads input from the user and stores it in the variable 'age'
How cin Works:

When the program reaches a cin statement, it waits for the user to enter data. The user types in their input and then presses the Enter key.
The input is then processed by the cin object, which converts the input from a string format into the appropriate data type based on the variable it is storing the value in.
Multiple Inputs:

You can read multiple values in a single line using cin by chaining the extraction operator:
cpp
Insert Code
Edit
Copy code
int x, y;
cout << "Enter two numbers: ";
cin >> x >> y; // Reads two integers from the user
Input Validation:

It's important to validate user input, especially when expecting certain data types. If the user enters data that cannot be converted to the expected type, cin will go into a fail state.
You can check the state of cin using:
cpp
Insert Code
Edit
Copy code
if (cin.fail()) {
    cout << "Invalid input!" << endl;
    cin.clear(); // Clears the fail state
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discards the invalid input
}
Common Data Types with cin:

cin can be used to read various data types, including:
Integers: int num; cin >> num;
Floating-point numbers: float f; cin >> f;
Characters: char c; cin >> c;
Strings: For strings, you can use std::string and cin will read until a whitespace:
cpp
Insert Code
Edit
Copy code
std::string name;
cin >> name; // Reads a single word
Reading Full Lines:

To read an entire line of input, including spaces, you can use std::getline instead of cin:
cpp
Insert Code
Edit
Copy code
std::string fullLine;
std::getline(cin, fullLine); // Reads a full

    */

    //@ endl;
    /* //*Let's break down `endl` in C++ using a step-by-step approach:

**1. C++ Streams and Output:**

- Imagine your C++ program as a machine that can generate information (like text or numbers).
- In C++, data is often sent to an output stream, which is like a destination for this information.
- A common output stream is the console, where you see the results of your program.

**2. The `endl` Manipulator:**

- `endl` is a special instruction you can add to an output statement.
- Think of it as a control code for the output stream, similar to how some keyboard keys might have special functions.

**3. What `endl` Does:**

- `endl` accomplishes two things:
   - It inserts a newline character into the output stream. This moves the cursor to the beginning of the next line.
   - It flushes the output stream. This ensures all pending output is sent immediately to the console, instead of waiting for a specific point.

**4. Putting it Together:**

- In `cout << some_data << endl`, the `<<` operator sends `some_data` to the output stream (`cout`).
- The `endl` manipulator then adds a newline and flushes the stream, ensuring `some_data` is displayed immediately followed by a new line on the console.

**In essence, `endl` is a way to control how output is displayed. It inserts a newline and forces the output to appear immediately on the console.**

Here's an analogy:

- Imagine writing a letter. You would write your message (`some_data`), press Enter for a new line, and then seal the envelope (`endl`). This ensures your message and the new line are sent together and displayed correctly. 
    */


    // Print "Namaste Duniya" to the console, followed by a newline character
    cout << "Namaste Duniya" << endl;
    /* //*Absolutely, let's break down `cout << "Namaste Duniya" << endl;` in C++ using a step-by-step approach:

**1. Building Blocks:**

- Imagine a C++ program as a set of instructions for a computer to follow. These instructions are written in a specific language that the computer can understand.

**2. Putting Words on the Screen:**

- You want your program to display a message on the screen. In C++, statements are like individual instructions that tell the computer to do something specific.

**3. `cout` - The Output Stream:**

- Think of `cout` as a special tool  that allows you to communicate information out of your program. In C++, it's an object connected to the standard output stream, which is typically the console or terminal where you see program results.

**4. Sending the Message:**

  - The part `cout << "Namaste Duniya"`  combines these elements. It tells the program to use `cout` (the output tool) to send the message "Namaste Duniya" (the information you provide) to the standard output stream (typically the console).

**5. Newline and Finish:**

  - The `endl` at the end adds a newline character to the output stream. This moves the cursor to the beginning of the next line, making the output appear cleaner. It also ensures everything is flushed to the console immediately.

**In essence, this line of code is a way for your program to display the message "Namaste Duniya" (Hello World in Hindi) on the console, followed by a new line.**

**Breaking it down further:**

- `cout <<`: This is the output statement, instructing the program to use the `cout` object for standard output.
- `"Namaste Duniya"`: This is a string literal, containing the text you want to display.
- `<< endl`: This inserts a newline character and flushes the output stream.

By following these steps, your program can communicate with the user and display the desired message.
    */

    // Print "Namaste Duniya" to the console without a newline character
    cout << "Namaste Duniya";

    // Print "Namaste Duniya" to the console, followed by a newline character
    cout << "Namaste Duniya" << '\n';

    /* //*Absolutely, let's explore data types and variables in C++ using a foundational approach:

**1. Building Blocks of Data:**

- Imagine your C++ program as a tool to process information. This information comes in various forms, like numbers, text, or true/false statements.

**2. Data Types: Categorizing Information**

/- Think of data types as categories that define how information is stored and used in your program. It's like having different containers for different things in a toolbox.

**3. Common C++ Data Types:**

  - **int (integer):** Stores -inf to +inf numbers (without decimals), like 10, -25, or 500.
  - **char (character):** Stores a single character, like 'a', '!', or '&'.
  - **bool (boolean):** Stores true or false values, for making logical decisions.
  - **float (floating-point):** Stores numbers with decimals, like 3.14 or -12.987 (less precise than double).
  - **double (floating-point):** Stores numbers with decimals, like 3.14159 or -12.3456789 (more precise than float).

**4. Variables: Containers for Data**

- Imagine a variable as a named box in your program's memory that can hold a specific data type. It's like labeling each container in your toolbox.

**5. Declaring Variables:**

  - To use a variable, you need to declare it. This tells the program the variable's name, data type, and allocates memory for it.
  - For example, `int age;` declares a variable named `age` that can store integers.

**6. Assigning Values:**

  - Once declared, you can assign a value to a variable using the assignment operator (`=`).
  - For example, `age = 25;` assigns the value 25 to the `age` variable.

**7. Using Variables:**

  - Variables store data that your program can use in calculations, comparisons, or output statements.
  - For example, you could calculate someone's next birthday by adding 1 to their age stored in a variable.

**In essence, data types define how information is categorized, and variables are named containers that store that information for your program to use.**

This is just a foundational explanation. As you learn more about C++, you'll explore additional data types and how they work together to create more complex programs.
    */

    /*
    DATATYPES AND VARIABLES
    EX : int a = 5
    a : is a variable

    int : type of data ( int: integer value) - generally 4 byte ---> 32 bit
    5 : value of the variable

    char ; ch = 'a'; --- generally 1 byte = 8 bit 

    bool ; boolean = True(1) / False(0) - 1bit

    float ; f = 1.2; - 4 byte --->32bit

    double ; d = 1.23; - 8 byte --->64bit

    string ; s = "Adarsh"; - 8 byte --->64bit

    Variable Name: qwerty/QWERTY/QWER123_QER_234
    never start with number
    */

    // Declare an integer variable 'a' and initialize it to 123
    int a = 123;
    cout<< a << endl;

    // Declare a character variable 'b' and initialize it to 'm'
    char b = 'm'; // only single character allowed
    cout<<b<< endl;

    // Declare a boolean variable 'c' and initialize it to true
    bool c = true;
    cout<<c<< endl;

    // Declare a float variable 'f' and initialize it to 1.2
    float f = 1.2;
    cout<<f<<endl;

    // Declare a double variable 'd' and initialize it to 1.3243
    double d = 1.3243;
    cout<<d<<endl;

    // Declare a string variable 's' and initialize it to "Adarsh"
    string s = "Adarsh";
    cout<<s<<endl;

    // Get the size of integer variable 'a' in bytes
    int asize = sizeof(a);
    cout<<"size of a is : "<< asize << endl;

    // Get the size of character variable 'b' in bytes
    int bsize = sizeof(b);
    cout<<"size of b is : "<< bsize << endl;

    // Get the size of boolean variable 'c' in bytes
    int csize = sizeof(c);
    cout<<"size of c is : "<< csize << endl;

    // Get the size of float variable 'f' in bytes
    int fsize = sizeof(f);
    cout<<"size of f is : "<< fsize << endl;

    // Get the size of double variable 'd' in bytes
    int dsize = sizeof(d);
    cout<<"size of d is : "<< dsize << endl;

    // Get the size of string variable 's' in bytes
    int ssize = sizeof(s);
    cout<<"size of s is : "<< ssize << endl;

  /// ASCII code reference: <https://www.ascii-code.com/codechart>

    /// Type-Casting - conversion of one data type to another 
    // Implicit 
    // Explicit
    /* //*Absolutely, let's explore type casting in C++ using a first principles approach:

**1. Data Types: The Building Blocks**

Imagine your C++ program as a workshop with different tools (variables) for different materials (data types). Integers are like hammers, floats are like screwdrivers, and characters are like wrenches. Each tool works best with its intended material.

**2. The Need for Conversion:**

Sometimes, during your work, you might need to use a tool on a material it wasn't exactly designed for. For instance, you might carefully use a hammer to nudge a screw (convert an integer to a float for an approximation).

**3. Type Casting: The Adapter**

In C++, type casting acts like an adapter. It allows you to convert a value from one data type to another. This can be useful in situations where you need to:

   - **Use a value in a calculation that requires a different type:** For example, adding an integer representing age to a float representing height might require converting the integer to a float.
   - **Store a value in a variable of a different type:** If you have a temporary calculation result as a float, but need to store it in an integer variable for counting, casting might be necessary (be cautious of precision loss).
   - **Pass data to a function that expects a different type:** Some functions might require specific data types as input, and casting can help bridge that gap.

**4. Be Cautious with the Adapter!**

Using a hammer on a screw might work in a pinch, but it's not ideal. Similarly, type casting can sometimes lead to unexpected results or data loss. Here's why:

   - **Loss of precision:** When converting from a larger data type (like float) to a smaller one (like int), some information might be truncated (lost).
   - **Unexpected behavior:** If you cast a value that's outside the allowed range of the target data type, it might cause errors or unintended consequences.

**5. Using the Adapter Wisely:**

Think carefully before using type casting. If possible, try to work with data types that are compatible from the beginning. But when necessary, use casting judiciously, understanding the potential risks and how to mitigate them.

**In essence, type casting is a way to convert data between types in C++, but use it with caution to avoid unexpected behavior or data loss.**
    */

    int x = 'a';
    cout<< x << endl;
    

    char j = 84;
    cout<< j << endl;

    //! if we try to input a big value in a small one then it will take out some last values of the big one and put it in th small one - and will give an o/p as @ 
    char ch1 = 123456654;
    cout<< ch1 << endl;

    /*


    how r -ve no. stored:

    first bit:-
        0 -> +ve
        1 -> -ve
*In C++, negative numbers are stored using a mechanism called Two's Complement. This method represents negative numbers by taking the binary representation of the positive number and inverting all the bits (changing 0s to 1s and 1s to 0s) and then adding 1 to the result. This allows for efficient arithmetic operations on both positive and negative numbers using the same hardware.
*For example, to represent -3 in a 4-bit system:
*The binary representation of 3 is 0011.Inverting the bits gives 1100. Adding 1 to 1100 results in 1101, which is the Two's Complement representation of -3.
*This method simplifies the hardware design for arithmetic operations involving negative numbers and allows for easy addition and subtraction without needing separate logic for negative numbers.

    */


   /// Unsigned Int
   /* //*Absolutely, let's explore unsigned integers in C++ using a foundational approach:

**1. Representing Numbers with Bits:**

Imagine a computer stores information using tiny switches that can be either on (1) or off (0). These switches are grouped together in collections called bits. By combining the values of these bits, we can represent numbers.

**2. Signed vs. Unsigned Integers:**

In C++, integers can be signed or unsigned. This determines how the bits in an integer are interpreted:

   - **Signed integers:** One bit is used to represent the sign (positive or negative), and the remaining bits represent the magnitude of the number. This allows storing both positive and negative numbers.
   - **Unsigned integers:** All bits represent the magnitude of the number. This allows for a larger range of positive values but cannot store negative numbers.

**3. Understanding Unsigned Integers:**

Think of an unsigned integer as a container that can only hold non-negative whole numbers (0, 1, 2, and so on). It's like a odometer in a car that only counts mileage forward, never going into negative.

**4. Benefits of Unsigned Integers:**

  - **Larger range of positive values:** Since no bits are used for the sign, unsigned integers can store a larger range of positive numbers compared to signed integers of the same size (in bits).
  - **Simpler calculations:** Some operations on unsigned integers can be faster because there's no sign to consider.

**5. When to Use Unsigned Integers:**

  - When you only need to deal with non-negative numbers, like representing quantities, percentages, or counts.
  - When dealing with memory addresses or bit manipulation operations where the values are inherently non-negative.

**6. Remember:**

  - Unsigned integers cannot store negative numbers. If a negative value is assigned to an unsigned integer, it might wrap around to a large positive value due to how bits are interpreted.

**In essence, unsigned integers are a data type in C++ that represent non-negative whole numbers, offering a larger range for positive values but not suitable for storing negative numbers.**
   */
    /*
    *unsigned int in C++: An unsigned int in C++ is a data type used to store only non-negative integers. It has a range of at least 0 to 65535 or higher, depending on the system. It is typically used when negative values are not needed, to increase the range of positive values that can be stored. When performing arithmetic operations, overflow may occur if the result exceeds the maximum value that can be stored in an unsigned int. 
    */
//    unsigned int k = 44;
   unsigned int k = -124;
   cout<< k << endl;

   /// Operators

  /* //*Absolutely, let's explore operators in C++ using a foundational approach:

**1. Building Blocks of Programs:**

Imagine your C++ program as a set of instructions for a computer to follow. These instructions involve calculations, comparisons, and making decisions based on conditions. Operators are like the tools you use to perform these actions.

**2. Arithmetic Operators:**

- These perform basic mathematical operations on numbers. They are like the arithmetic tools you might use in math class:
   - `+` for addition
   - `-` for subtraction
   - `*` for multiplication
   - `/` for division

**3. Modulus Operator (`%`):**

- This operator calculates the remainder after a division. Imagine you have a certain number of items and want to know how many are leftover after dividing them into equal groups. The modulus operator gives you that leftover amount.

**4. Relational Operators:**

- These operators help compare values and return true or false based on the comparison. They are like tools for making judgments:
   - `==` for equal to
   - `!=` for not equal to 
   - `<` for less than
   - `>` for greater than
   - `<=` for less than or equal to
   - `>=` for greater than or equal to

**5. Logical Operators:**

- These operators combine conditions (often the results of relational operators) using logic keywords like AND, OR, and NOT. Imagine you have multiple criteria to meet, and logical operators help you decide if all, any, or none of the conditions are true.
   - `&&` for AND (both conditions must be true)
   - `||` for OR (at least one condition must be true)
   - `!` for NOT (inverts the truth value)

**6. Putting it Together:**

- Operators allow you to perform calculations, comparisons, and make decisions based on conditions. This forms the foundation for creating more complex programs that can process and manipulate data.

**Remember:** This is a foundational explanation. As you learn more about C++, you'll explore how these operators work together in expressions and statements to create powerful programs.
  */

   /*
   Arithmetic operators - [ +,-,/,* ]
   modulus operators 
   */

  int y = 2.0/5; // the general output should be 0.4
  cout<< y <<endl;
  // but the ouput here will be 0 bcz,whenever it is int/int = int, if float/int = float , and if double/int = double
  // now bcz here we have assigned the variable as an integer datatype , therefore even if the ans is 0.4 , it will output 0 
  // to get the actual ans we need to change the datatype of the variable to float or double
  cout<< 2.0/5 <<endl;

  float z = 2.0/5;
  cout<< z <<endl;

  double q = 2.0/5;
  cout<< q <<endl;

  //Relational Operators
  //@ [ ==, !=, >, <, >=, <= ]

  int n1 = 3;
  int n2 = 7;

  bool o1 = (n1==n2);
  cout<< o1 << endl;

  bool o2 = (n1!=n2);
  cout<< o2 << endl;

  bool o3 = (n1>n2);
  cout<< o3 << endl;

  bool o4 = (n1<n2);
  cout<< o4 << endl;

  bool o5 = (n1>=n2);
  cout<< o5 << endl;

  bool o6 = (n1<=n2);
  cout<< o6 << endl;

//* 0 = False , 1 = True
  
  //Logical Operators
  //@ [ &&, ||, ! ]

  int num1 = 1;
  cout<< !num1 <<endl;
  int num2 = 0;
  cout<< !num2 <<endl;

  int num3 = 1;
  int num4 = 0;
  cout<< (num3&&num4) <<endl;
  cout<< (num3||num4) <<endl;

}
// End of main function
