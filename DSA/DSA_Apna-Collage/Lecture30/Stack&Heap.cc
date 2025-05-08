#include<iostream>
using namespace std;
                   
int main(){

    /*
    
    To explain the concepts of **stack** and **heap** memory in C++, we'll explore them from a first principles perspective. We'll consider their basic definitions, characteristics, and differences, using a table and a simple diagram for visualization. Let's start with the foundational concepts and build upon them.

/**

### Memory Layout in C++

In C++, memory is divided into different sections:

1. **Code Segment:** Where the compiled code of the program resides.
2. **Data Segment:** Stores global and static variables. 
3. **Stack:** Used for static memory allocation, such as function call management.
4. **Heap:** Used for dynamic memory allocation, managed manually by the programmer.

### Stack

#### Definition
The stack is a region of memory that stores temporary variables created by each function. When a function is called, a *stack frame* is created for that function call, containing its local variables and some administrative data.

#### Characteristics
- **Size:** Typically smaller than the heap.
- **Lifetime:** Automatically managed; data is destroyed when the function call ends.
- **Speed:** Faster access due to its Last-In-First-Out (LIFO) structure.
- **Allocation:** Static memory allocation.
- **Scope:** Local to the function in which the variables are defined.

#### Visualization
```
|----------------------|
|     Function Call    |
|----------------------| <-- Stack Frame 3 (current function)
|     Function Call    |
|----------------------| <-- Stack Frame 2
|     Function Call    |
|----------------------| <-- Stack Frame 1 (main function)
|      ....            |
|----------------------|
```

### Heap

#### Definition
The heap is a region of memory used for dynamic memory allocation. Unlike the stack, memory in the heap must be manually allocated and deallocated using operators like `new` and `delete`.

#### Characteristics
- **Size:** Typically larger than the stack.
- **Lifetime:** Managed manually by the programmer; persists until explicitly deallocated.
- **Speed:** Slower access compared to the stack due to more complex memory management.
- **Allocation:** Dynamic memory allocation.
- **Scope:** Can be accessed globally if a pointer to the allocated memory is shared.

#### Visualization
```
Heap
|----------------------|
|  Dynamically Alloc.  |
|       Object         |
|----------------------| <-- Memory block 1
|  Dynamically Alloc.  |
|       Object         |
|----------------------| <-- Memory block 2
|      ....            |
|----------------------|
```

### Differences between Stack and Heap

| **Aspect**            | **Stack**                        | **Heap**                          |
|-----------------------|----------------------------------|-----------------------------------|
| **Memory Allocation** | Static                           | Dynamic                           |
| **Management**        | Automatic                        | Manual                            |
| **Size**              | Generally smaller                | Generally larger                  |
| **Lifetime**          | Until the function returns       | Until explicitly deallocated      |
| **Access Speed**      | Faster                           | Slower                            |
| **Fragmentation**     | No                               | Yes (can lead to fragmentation)   |
| **Scope**             | Local to function                | Global (if pointer is shared)     |

**/

    

}