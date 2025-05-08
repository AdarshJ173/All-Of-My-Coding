#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(Node* &head){

    Node* todelete = head;
    head = head->next;

    delete todelete;

}

void deletion(Node* &head, int val){

    if (head == NULL)
    {
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }

    if(head == NULL) return;
    if(head->data == val){
        Node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }
    if(temp->next != NULL){
        Node* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }
}

Node* reverse(Node* &head){

    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr ;

    while (currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    
    return prevptr;

}

int main() {
    Node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);

    // insertAtHead(head, 4);
    // display(head);

    // cout << search(head, 5) << endl;
    // cout << search(head, 3) << endl;

    // // deletion(head, 2);
    // deleteAtHead(head);
    // display(head);

    Node* newhead = reverse(head);
    display(newhead);

    return 0;
}