/// Function - Call Stack

/*

factorial()
^
nCr()
^
main()

*/

/*
/// Absolutely, let's explore the function call stack in C++ from a first-principles approach, using clear explanations and examples:

**1. Imagining Program Execution**

Imagine you're following a recipe (your C++ program) with multiple steps (functions). As you complete each step, you might need to refer back to previous instructions or even follow a sub-recipe (another function) for a specific task. The function call stack keeps track of these steps and function calls to ensure you don't lose track and can complete the recipe efficiently.

**2. The Function Call Stack: A Stack of Actions**

In C++, the function call stack is a fundamental concept in program execution. It's a special data structure (like a stack of plates) that keeps track of active function calls during program runtime. Each time a function is called, information about that function invocation is pushed onto the stack. This information includes:

  - The function's local variables and their values
  - The return address: Where to return to in the calling function after the called function finishes

**3. Thinking from First Principles: Analogy**

Imagine you're cooking a meal that involves several steps:

  1. **Main Recipe (main function):** The main recipe outlines the overall process, listing the steps and sub-recipes (functions) to be followed.
  2. **Calling Sub-recipes (Function Calls):** When you encounter a step that requires a specific task (like chopping vegetables), you might reference a sub-recipe (function) that details those instructions.
  3. **Stack of Steps:** As you follow the recipe, you can think of keeping track of your current location (function) on a stack of papers. This stack helps you remember which sub-recipe (function) you're currently working on and where to return to (calling function) after completing that task.

**4. How the Function Call Stack Works:**

  - When the `main` function starts, information about it is pushed onto the stack. This is the entry point of your program execution.
  - Whenever a function is called from within another function, a new stack frame (representing the called function) is pushed onto the stack. This frame stores the local variables and return address for the called function.
  - The program execution jumps to the called function's code.
  - Inside the called function, the program can access and manipulate its local variables.
  - When the called function finishes its task (reaches its return statement), its stack frame is popped from the stack.
  - The program execution returns to the calling function, resuming from the instruction after the function call.

**5. Example: A Simple Function Call**

Here's a basic example to illustrate the function call stack:

```c++
void printGreeting() {
  // Local variable (name) specific to this function
  string name = "Alice";
  cout << "Hello, " << name << "!" << endl;
}

int main() {
  // Call the printGreeting function
  printGreeting();

  return 0;
}
```

In this example:

- When `main` starts, its information goes onto the stack.
- When `printGreeting` is called, its stack frame with local variable `name` is pushed onto the stack.
- The program executes `printGreeting`, printing "Hello, Alice!".
- When `printGreeting` finishes, its stack frame is popped, and the program returns to `main`.

**6. Summary:**

The function call stack is an essential concept in C++. It ensures organized execution of functions, keeping track of local variables and the return flow between functions. By understanding the function call stack, you can write more structured and maintainable C++ programs.
*/