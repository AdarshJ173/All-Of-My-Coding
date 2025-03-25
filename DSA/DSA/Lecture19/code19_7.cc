/// PRIORITY QUEUE

#include <iostream>
#include <queue>

using namespace std;

int main() {

    priority_queue<int> maxi;

    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"size--> "<<maxi.size()<<endl;

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    
    cout<<endl<<'\n';

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout<<"size--> "<<mini.size()<<endl;

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    
    cout<<endl<<'\n';

    cout<<"Khali h kya bhai: "<<mini.empty()<<endl;

    cout<<endl<<'\n';
    // Create a priority queue with default comparator (max-heap)
    priority_queue<int> pq;

    // Enqueue elements into the priority queue
    pq.push(3);
    pq.push(1);
    pq.push(4);
    pq.push(2);

    cout << "Top element (highest priority): " << pq.top() << endl; // Output: 4

    // Dequeue elements from the priority queue
    pq.pop(); // Removes 4 from the priority queue
    pq.pop(); // Removes 3 from the priority queue

    // Check if the priority queue is empty
    if (pq.empty()) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl; // Output: Priority queue is not empty
    }

    // Get the size of the priority queue
    cout << "Size of the priority queue: " << pq.size() << endl; // Output: 2

    return 0;
}

/*
Sure, I'll explain priority queues in C++ in detail, covering topics, subtopics, examples, and following a first principles thinking approach.

First Principles Thinking:
- In many real-world scenarios, we encounter situations where tasks, events, or data need to be processed based on their priorities or importance.
- The priority queue data structure is designed to store and retrieve elements based on their assigned priorities, ensuring that the highest-priority element is always accessible and processed first.
- The priority queue provides an efficient way to manage and manipulate data based on priorities, allowing elements to be added (enqueued) and removed (dequeued) based on their respective priorities.

I. What is a Priority Queue?
   A. A priority queue is an abstract data type (ADT) that follows a specific ordering principle: the element with the highest priority is always at the front.
   B. It supports two main operations:
      1. `enqueue(element, priority)`: Adds an element to the priority queue with a specified priority.
      2. `dequeue()`: Removes and returns the element with the highest priority from the priority queue.

II. Implementation of Priority Queues in C++:
   A. `std::priority_queue`: A container adapter class in the C++ Standard Template Library (STL) that provides a standard interface for the priority queue data structure.
   B. `std::priority_queue` is typically implemented using another container (e.g., `std::vector`) as the underlying data structure, along with a comparison function or functor to determine the priority order.

III. Priority Queue Operations:
   A. `push(element)` or `enqueue(element, priority)`: Inserts an element into the priority queue with a specified priority.
   B. `pop()` or `dequeue()`: Removes and returns the element with the highest priority from the priority queue.
   C. `top()`: Retrieves the element with the highest priority without removing it from the priority queue.
   D. `empty()`: Returns a boolean indicating whether the priority queue is empty or not.
   E. `size()`: Returns the number of elements in the priority queue.

IV. Applications of Priority Queues:
   A. Event handling and scheduling systems (e.g., operating system task scheduling)
   B. Network traffic management and packet routing (prioritizing critical packets)
   C. Dijkstra's algorithm for finding the shortest path in a graph
   D. Huffman coding for data compression
   E. Simulation and modeling systems (e.g., discrete event simulation)

V. Example Usage:

```cpp

```

Output:
```
Top element (highest priority): 4
Priority queue is not empty
Size of the priority queue: 2
```

In the example above, we create a `std::priority_queue` with the default comparator, which treats elements as if they were keys in a `std::max_heap`. This means that the element with the highest value (in this case, 4) is considered the highest priority and will be at the front of the priority queue.

You can also define a custom comparator function or functor to specify different priority criteria, such as lower values having higher priority or using more complex data structures as elements.

Priority queues are widely used in applications that require prioritizing tasks, events, or data based on their importance or urgency, such as operating system task scheduling, network traffic management, pathfinding algorithms, and simulation systems. They provide an efficient way to manage and manipulate data based on priorities, ensuring that the highest-priority element is always accessible and processed first.

The C++ Standard Template Library (STL) provides the `std::priority_queue` container adapter class, which provides a standard interface for the priority queue data structure. This class is typically implemented using another container, such as `std::vector`, as the underlying data structure, along with a comparison function or functor to determine the priority order.
*/