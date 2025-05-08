// https://www.naukri.com/code360/problems/mergesort-linked-list_630514?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=SUBMISSION 

// https://www.naukri.com/code360/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb
/*
Let's break down the solution:

Helper Function: merge(Node* a, Node* b)
This function merges two sorted linked lists (connected by the child pointer) into one sorted list.

Base cases:
cppCopy codeif (!a) return b;
if (!b) return a;
If one of the lists is empty, we return the other list.
Recursive case:
cppCopy codeNode* result;
if (a->data < b->data) {
    result = a;
    result->child = merge(a->child, b);
} else {
    result = b;
    result->child = merge(a, b->child);
}
We compare the data of the two nodes a and b. The smaller one becomes the head of the merged list (result). Then, we recursively merge the child of the smaller node with the other list.
Setting next to nullptr:
cppCopy coderesult->next = nullptr;
Since we're flattening the list, all next pointers will be set to nullptr, and we'll use child pointers to connect nodes in the flattened list.


Main Function: flattenLinkedList(Node* head)
This function flattens the entire multi-level linked list.

Base case:
cppCopy codeif (!head || !head->next) return head;
If the list is empty or has only one node, it's already flattened.
Recursive flattening:
cppCopy codehead->next = flattenLinkedList(head->next);
We recursively flatten the rest of the list (all nodes after head). This ensures that when we get to merging, the next node's sublist is already flattened.
Merging current head with the flattened next:
cppCopy codehead = merge(head, head->next);
We merge the current head's child list with the flattened list that starts from head->next. This gives us a single flattened and sorted list.
Return the new head:
cppCopy codereturn head;
After merging, head points to the start of the flattened list.


Time and Space Complexity:

Time Complexity: O(N * K), where N is the number of head nodes, and K is the average length of child lists. We're essentially merging N lists, each of average length K.
Space Complexity: O(N) for the recursion stack in the worst case (when the list is skewed). However, we're not using any extra data structures, so it's O(1) auxiliary space.


Key Insights:

We're using the child pointer to connect nodes in the flattened list, which allows us to avoid using extra space.
The problem is solved by repeatedly merging two sorted lists, which is a fundamental operation in many sorting algorithms (like merge sort).
The recursive approach simplifies the logic by breaking down the problem into smaller, manageable parts (divide and conquer).


Potential Optimizations:

We could potentially optimize this to O(N * log K) time complexity by using a priority queue to merge all lists at once, similar to the approach in merging K sorted lists. However, that would require extra space.
An iterative solution could be developed to avoid the recursion stack space, but it would likely be more complex to implement.



This solution efficiently flattens the multi-level linked list by leveraging the sorted nature of the child lists and the power of recursive merging. The use of the child pointer for the flattened list allows us to achieve the space optimization required by the problem statement.
*/