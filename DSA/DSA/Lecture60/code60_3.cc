// Queue implementation using linked list
#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class QueueLinkedList {
private:
    Node* front;
    Node* rear;
    int size;

public:
    QueueLinkedList() {
        front = rear = nullptr;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;

        size--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return front->data;
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return rear->data;
    }

    int getSize() {
        return size;
    }
};
