// Queue is a linear data structure that follows the First In First Out (FIFO) principle. It operates by adding elements to the back of the queue (enqueue) and removing elements from the front of the queue (dequeue). Queues are commonly used in scenarios where the order of elements being processed is important, such as in task scheduling, breadth-first search algorithms, and printer queues.
/**
 * Queue Operations:
 * 1. Enqueue: Adds a new element to the rear of the queue.
 * 2. Dequeue: Removes the element from the front of the queue.
 * 3. Front: Returns the oldest element in the queue.
 * 4. Rear: Returns the position where the next enqueued element will be inserted.
 * 5. isEmpty: Checks if the queue is empty.
 * 6. isFull: Checks if the queue is full.
 */

 /*
 A queue is a fundamental data structure in computer science that follows the principle of First-In-First-Out (FIFO). It is a linear collection of elements in which the addition of new elements (enqueue operation) occurs at one end, called the rear, and the removal of existing elements (dequeue operation) occurs at the other end, called the front.

The key characteristics of a queue are:

1. **FIFO Principle**: The first element added to the queue will be the first one to be removed. This principle ensures that elements are processed in the order they were added.

2. **Enqueue Operation**: This operation adds a new element to the rear of the queue. If the queue is initially empty, the new element becomes both the front and rear of the queue.

3. **Dequeue Operation**: This operation removes the element from the front of the queue. If the queue is empty, the dequeue operation will fail or return an error.

4. **Front and Rear**: The front of the queue refers to the oldest element that will be dequeued next, while the rear refers to the position where the next enqueued element will be inserted.

5. **Queue Overflow and Underflow**: Overflow occurs when attempting to enqueue an element into a full queue, and underflow occurs when attempting to dequeue from an empty queue. These situations need to be handled appropriately in the implementation.

Queues have various applications in computer science and real-world scenarios. Some common use cases include:

1. **Operating Systems**: Queues are used to manage processes, manage print jobs, and handle interrupts.
2. **Computer Networks**: Queues are used in packet switching and routing techniques to buffer and transmit data packets.
3. **Job Scheduling**: Queues are used to schedule and manage tasks or jobs in order, ensuring fairness and preventing starvation.
4. **Simulation and Modeling**: Queues are used to model and simulate real-world scenarios like customers waiting in line at a bank or cars waiting at a traffic signal.

Queues can be implemented using different data structures, such as arrays or linked lists. The choice of implementation depends on factors like memory constraints, performance requirements, and the need for dynamic resizing.

In summary, a queue is a fundamental data structure that follows the FIFO principle, enabling the orderly addition and removal of elements. It plays a crucial role in various applications where maintaining the order of elements is essential.
 */