#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextNode = nullptr; // Changed variable name from 'next' to 'nextNode' to fix the error

    while (curr != nullptr) {
        nextNode = curr->next; // Updated variable name to 'nextNode'
        curr->next = prev;
        prev = curr;
        curr = nextNode; // Updated variable name to 'nextNode'
    }

    return prev;
}

// https://www.naukri.com/code360/problems/reverse-linked-list_920513

// https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan
