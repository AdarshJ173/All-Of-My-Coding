/// Linked List & its types - Singly, Doubly, Circular etc.
// Linked list is a linear data structure consisting of nodes where each node contains a data element and a reference (link) to the next node in the sequence. The first node is called the head and the last node points to NULL. Linked lists can be singly linked (each node points to the next node), doubly linked (each node points to the next and previous nodes), or circular (the last node points back to the head). Linked lists are dynamic in size and efficient for insertion and deletion operations compared to arrays.

// Linked lists are used in scenarios where dynamic size allocation is required, such as implementing stacks, queues, and graphs. They provide flexibility in memory usage and are suitable for applications where the size of the data structure is not known beforehand. Linked lists are commonly used in operating systems, file systems, and memory management algorithms due to their efficient memory utilization and ease of modification.

// Nodes in a linear data structure are fundamental building blocks that store data and references to other nodes. Each node typically contains two main components: the data element, which holds the actual information, and a reference (link) to the next node in the sequence. In a singly linked list, each node points to the next node in a linear fashion. In a doubly linked list, each node points to both the next and previous nodes, allowing for bidirectional traversal. In a circular linked list, the last node points back to the head, forming a circular structure.

// Nodes play a crucial role in maintaining the structure and connectivity of the linear data structure. They enable efficient traversal, insertion, and deletion operations by providing a way to navigate through the elements sequentially. The first node in the sequence is known as the head, and the last node typically points to NULL or back to the head in the case of a circular list.

// Nodes are essential for dynamic data structures like linked lists, where elements can be added or removed dynamically without the need for contiguous memory allocation. Understanding nodes is key to grasping the underlying mechanics of linear data structures and their operations.

// Heap memory is a region of the computer's memory that is dynamically allocated during program execution. It is used for storing data that needs to persist beyond the scope of a function or when the size of the data is not known at compile time. In the context of linked lists, heap memory is crucial for creating nodes dynamically and linking them together to form the structure of the list.

// When a new node is created for a linked list, it is allocated memory on the heap using functions like malloc() or new in C++. This allows the node to exist independently of the function that created it and ensures that it remains in memory until explicitly deallocated. Heap memory is essential for implementing dynamic data structures like linked lists because it allows nodes to be added or removed as needed without requiring a fixed amount of memory at compile time.

// In a singly linked list, each node contains a data element and a pointer/reference to the next node. When a new node is added to the list, memory is allocated on the heap for the node, and its pointer is updated to point to the next node in the sequence. Similarly, in a doubly linked list, each node has pointers to both the next and previous nodes, and heap memory is used to allocate space for these connections.

// Heap memory management is critical in linked lists to prevent memory leaks and ensure efficient memory usage. When a node is no longer needed, it should be explicitly deallocated using functions like free() or delete in C++. Failing to release heap memory can lead to memory leaks, where unused memory remains allocated and unavailable for other parts of the program.

// Overall, heap memory plays a vital role in the dynamic nature of linked lists by enabling the creation, modification, and deletion of nodes at runtime, providing flexibility and efficiency in managing data structures.

// Singly Linked List:
// - A linear data structure where each node contains data and a reference to the next node.
// - Efficient for insertion and deletion operations compared to arrays.
// - Dynamic in size.
// - Commonly used in scenarios requiring dynamic size allocation like stacks and queues.

// Doubly Linked List:
// - Each node points to the next and previous nodes.
// - Allows bidirectional traversal.
// - Requires more memory due to storing references to both next and previous nodes.
// - Useful for scenarios where traversal in both directions is needed.

// Circular Linked List:
// - Last node points back to the head, forming a circular structure.
// - Can be singly or doubly linked.
// - Useful for applications where continuous traversal is required without a definite end.
// - Ensures that traversal can start from any point in the list.

// Overall, linked lists are dynamic data structures that provide flexibility in memory usage and efficient insertion and deletion operations. Singly linked lists are simple and efficient, doubly linked lists offer bidirectional traversal, and circular linked lists provide continuous traversal capabilities.
 