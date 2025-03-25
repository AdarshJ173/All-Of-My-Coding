/// STACK

#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string>s;
    s.push("AAJ");
    s.push("Aarav");
    s.push("Aarnavy");

    cout<<"Top Element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;

    cout<<"empty or not: "<<s.empty()<<endl;
}

/*
1st is last _ last is 1st
*/

/*
*Sure, I'll explain stacks in C++ in detail, covering topics, subtopics, examples, and following a first principles thinking approach.
First Principles Thinking:

In programming, we often encounter situations where we need to process or store data in a specific order.
The stack data structure is designed to follow the Last-In-First-Out (LIFO) principle, which is useful in various applications, such as expression evaluation, backtracking algorithms, and undo/redo functionality.
The stack provides a simple and efficient way to manage and manipulate data in a LIFO order, allowing elements to be added (pushed) and removed (popped) from one end only.

I. What is a Stack?
A. A stack is a linear data structure that follows the LIFO (Last-In-First-Out) principle.
B. It is an abstract data type (ADT) with two principal operations:
1. push(): Adds an element to the top of the stack.
2. pop(): Removes the top element from the stack.
II. Implementation of Stacks in C++:
A. std::stack: A container adapter class in the C++ Standard Template Library (STL) that provides a standard interface for the stack data structure.
B. std::stack is typically implemented using another container (e.g., std::deque or std::vector) as the underlying data structure.
III. Stack Operations:
A. push(element): Inserts an element at the top of the stack.
B. pop(): Removes the top element from the stack.
C. top(): Retrieves the top element of the stack without removing it.
D. empty(): Returns a boolean indicating whether the stack is empty or not.
E. size(): Returns the number of elements in the stack.
IV. Applications of Stacks:
A. Expression evaluation (e.g., postfix and prefix notation)
B. Backtracking algorithms (e.g., maze solving, N-queens problem)
C. Undo/redo functionality in text editors and other applications
D. Implementing function call stack and memory management in compilers and interpreters
E. Depth-First Search (DFS) in graph algorithms

Lists are particularly useful when you need to frequently insert or remove elements at arbitrary positions in a container. They provide constant-time complexity for these operations, which is more efficient than the linear-time complexity of vector insertions or removals at positions other than the end. However, for sequential access and element retrieval, vectors are generally more efficient due to their contiguous memory layout.
*/