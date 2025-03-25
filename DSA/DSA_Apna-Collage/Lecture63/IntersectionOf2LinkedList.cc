#include <iostream>
using namespace std;

// Node class to represent a node in the doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtTail(Node*& head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtHead(Node*& head) {
    if (head == NULL) return;
    Node* toDelete = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete toDelete;
}

void deletion(Node*& head, int pos) {
    if (head == NULL) return;
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (temp != NULL && count != pos) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) return;
    temp->prev->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

int length(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

Node* kappend(Node*& head, int k) {
    if (head == NULL || k == 0) return head;
    int len = length(head);
    k = k % len;
    if (k == 0) return head;
    Node* newHead;
    Node* newTail;
    Node* tail = head;
    int count = 1;
    while (tail->next != NULL) {
        if (count == len - k) {
            newTail = tail;
        }
        if (count == len - k + 1) {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;
    head->prev = tail;
    newHead->prev = NULL;
    return newHead;
}

int intersection(Node* &head1, Node* &head2) {
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    Node* ptr1;
    Node* ptr2;

    if (l1 > l2) {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    } else {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d) {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
            return -1;
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1 == ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

void intersect(Node* &head1, Node* &head2, int pos) {
    Node* temp1 = head1;
    pos--;
    while (pos-- && temp1 != NULL) {
        temp1 = temp1->next;
    }
    if (temp1 == NULL) return;
    Node* temp2 = head2;
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);

    insertAtTail(head2, 9);
    insertAtTail(head2, 10);

    intersect(head1, head2, 3);

    display(head1);
    display(head2);

    cout<<intersection(head1,head2)<<endl;

    return 0;
}