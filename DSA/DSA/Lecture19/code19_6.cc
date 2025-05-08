/// QUEUE 

#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("AAJ");
    q.push("Aarav");
    q.push("Aarnavy");
    
    cout<<"Size of stack: "<<q.size()<<endl;

    cout<<"Top Element: "<<q.front()<<endl;

    q.pop();
    cout<<"Top Element: "<<q.front()<<endl;

    cout<<"Size of stack: "<<q.size()<<endl;

    cout<<"empty or not: "<<q.empty()<<endl;
}

/*
1st is 1st - last is last
*/

/*
*Sure, I'll explain queues in C++ in detail, covering topics, subtopics, examples, and following a first principles thinking approach.
First Principles Thinking:

In many real-world scenarios, we encounter situations where we need to process or handle tasks, requests, or data in a specific order.
The queue data structure is designed to follow the First-In-First-Out (FIFO) principle, which is useful in various applications, such as job scheduling, network traffic management, and event handling.
The queue provides a simple and efficient way to manage and manipulate data in a FIFO order, allowing elements to be added (enqueued) at one end and removed (dequeued) from the other end.

I. What is a Queue?
A. A queue is a linear data structure that follows the FIFO (First-In-First-Out) principle.
B. It is an abstract data type (ADT) with two principal operations:
1. enqueue(): Adds an element to the rear end of the queue.
2. dequeue(): Removes the front element from the queue.
II. Implementation of Queues in C++:
A. std::queue: A container adapter class in the C++ Standard Template Library (STL) that provides a standard interface for the queue data structure.
B. std::queue is typically implemented using another container (e.g., std::deque or std::list) as the underlying data structure.
III. Queue Operations:
A. push(element) or enqueue(element): Inserts an element at the rear end of the queue.
B. pop() or dequeue(): Removes the front element from the queue.
C. front(): Retrieves the front element of the queue without removing it.
D. back(): Retrieves the rear element of the queue without removing it.
E. empty(): Returns a boolean indicating whether the queue is empty or not.
F. size(): Returns the number of elements in the queue.
IV. Applications of Queues:
A. Job scheduling and resource allocation
B. Network traffic management and packet routing
C. Event handling and message queueing systems
D. Breadth-First Search (BFS) in graph algorithms
E. Printer spooling and task scheduling in operating systems

Queues are widely used in various applications, such as job scheduling, network traffic management, event handling, and breadth-first search algorithms. They provide a simple and efficient way to manage and manipulate data in a FIFO (First-In-First-Out) order, ensuring that the first element added is the first one to be removed.
The C++ Standard Template Library (STL) provides the std::queue container adapter class, which provides a standard interface for the queue data structure. This class is typically implemented using another container, such as std::deque or std::list, as the underlying data structure.
*/