///STACK
/*
Stacks are a fundamental data structure in computer science. They follow the Last In, First Out (LIFO) principle, meaning that the last element added to the stack is the first one to be removed.

Key operations on a stack:
1. Push: Adds an element to the top of the stack.
2. Pop: Removes and returns the top element from the stack.
3. Peek (or Top): Returns the top element without removing it.
4. isEmpty: Checks if the stack is empty.
5. Size: Returns the number of elements in the stack.

Stacks can be implemented using arrays or linked lists. Array-based stacks have a fixed size, while linked list-based stacks can dynamically grow.

Applications of stacks:
1. Function call stack in programming languages.
2. Undo mechanisms in text editors.
3. Expression evaluation and syntax parsing.
4. Backtracking algorithms.
5. Memory management in compilers.

Stacks are efficient for operations that involve adding and removing elements from one end only. Understanding stacks is crucial for mastering more complex data structures and algorithms.
*/

/*
LIFO (Last In, First Out) is a principle that governs the behavior of stacks. In a LIFO structure, the last element that was added to the stack is the first one to be removed. This means that elements are added and removed from the same end of the stack, known as the top.

When a new element is pushed onto the stack, it becomes the new top element. When an element is popped from the stack, it is always the top element that is removed. This ensures that the most recently added elements are the first to be accessed or removed.

The key idea behind LIFO is that the most recent elements are the most relevant or important for the current context. This ordering principle is fundamental in various applications of stacks, such as function call stacks, undo mechanisms, expression evaluation, and backtracking algorithms.

Understanding LIFO from first principles involves recognizing the importance of maintaining a consistent order of elements based on their arrival sequence. By adhering to the LIFO principle, stacks provide efficient and predictable behavior for managing data in a wide range of computational scenarios.
*/

/*
Explanation of Stack Operations:

Brief:
1. Push: Adds an element to the top of the stack.
2. Pop: Removes and returns the top element from the stack.
3. Peek (or Top): Returns the top element without removing it.
4. isEmpty: Checks if the stack is empty.
5. Size: Returns the number of elements in the stack.

Detail:
- Push operation: Adds an element to the top of the stack, shifting the top position to accommodate the new element.
- Pop operation: Removes and returns the top element from the stack, updating the top position to the previous element.
- Peek operation: Returns the top element without modifying the stack structure.
- isEmpty operation: Checks if the stack is empty by verifying if there are any elements in the stack.
- Size operation: Calculates the number of elements in the stack based on the current top position.

Understanding Stack Operations:
- The fundamental principle of a stack is Last In, First Out (LIFO), where the last element added is the first one to be removed.
- Stacks are commonly used in various applications such as function call stacks, undo mechanisms, expression evaluation, and backtracking algorithms.
- Efficient for operations involving adding and removing elements from one end only, providing predictable behavior for managing data.

*/
















