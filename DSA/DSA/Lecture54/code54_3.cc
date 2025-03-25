#include<iostream>
#include<stack>

using namespace std;

// Stack Implementation using Linked List

// Node class for linked list
class Node {
public:
    int data; // data of the node
    Node* next; // pointer to the next node

    Node(int data) { // constructor to initialize the node
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top; // pointer to the top node of the stack

public:
    Stack() { // constructor to initialize the stack
        top = nullptr;
    }

    void push(int element) { // function to push an element onto the stack
        Node* newNode = new Node(element); // create a new node with the element
        newNode->next = top; // point the new node to the current top
        top = newNode; // update the top to the new node
    }

    void pop() { // function to pop an element from the stack
        if (top == nullptr) { // check if the stack is empty
            cout << "Stack Underflow" << endl; // display error message if stack is empty
            return;
        }
        Node* temp = top; // temporary pointer to the current top
        top = top->next; // update top to the next node
        delete temp; // delete the previous top node
    }

    int peek() { // function to peek at the top element of the stack
        if (top == nullptr) { // check if the stack is empty
            cout << "Stack is empty" << endl; // display error message if stack is empty
            return -1;
        }
        return top->data; // return the data of the top node
    }

    bool empty() { // function to check if the stack is empty
        return top == nullptr; // return true if top is null (stack is empty)
    }

    int getSize() { // function to get the current size of the stack
        int size = 0;
        Node* current = top;
        while (current != nullptr) { // traverse the stack
            size++;
            current = current->next;
        }
        return size;
    }
};

int main() {
    // Test the Stack implementation
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;

    cout << "Stack size: " << stack.getSize() << endl;

    return 0;
}
