

    /*

    Detection and Removal of cycle in linked list.
    Floyd's Algorithm
    Hare and Tortoise Algorithm

    */

#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = NULL;
    }
};


void insertAtHead(node* &head, int value) {
    node* newNode = new node(value);
    newNode->next = head;
    head = newNode;
}


void insertAtTail(node* &head, int value) {
    node* newNode = new node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


bool search(node* head, int key) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}


void deleteAtHead(node* &head) {

    node* todelete = head;
    head = head->next;

    delete todelete;

}


void deletion(node* &head, int val) {

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
        node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    node* temp = head;
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next;
    }
    if(temp->next != NULL){
        node* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
    }
}


node* reverse(node* &head) {

    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while (currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    
    return prevptr;

}


node* reverseRecursive(node* &head) {

    if (head == NULL || head->next==NULL)
    {
        return head;
    }
    

    node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;

}

// Function to reverse the linked list in groups of k nodes
node* reverseK(node* &head, int k) {
    // Initialize pointers for the previous, current, and next nodes
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    // Initialize a counter to keep track of the number of nodes reversed
    int count = 0;

    // Reverse the first k nodes
    while (currptr != NULL && count < k) {
        // Store the next node
        nextptr = currptr->next;
        // Reverse the link between the current node and the previous node
        currptr->next = prevptr;
        // Move the previous and current pointers forward
        prevptr = currptr;
        currptr = nextptr;
        // Increment the counter
        count++;
    }

    // If there are remaining nodes, recursively reverse them
    if (nextptr != NULL) {
        head->next = reverseK(nextptr, k);
    }

    // Return the new head of the reversed list
    return prevptr;
}

void makeCycle(node* &head,int pos){
        
    node* temp = head;
    node* startNode;

    int count = 1;

    while (temp->next!=NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }

        temp = temp->next;
        count++;
        
    }
    
    temp->next = startNode;

}

bool detectCycle(node* &head){

    node* slow = head;
    node* fast = head;

    while (fast!=NULL && fast->next!=NULL )
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
        
    }
    return false;

}

void removeCycle(node* &head){

    node* slow = head;
    node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);
    
    fast = head;

    while (slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    
    slow->next = NULL;

}

int main() {

    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    // display(head);

    makeCycle(head,3);

    // display(head);

    cout<<detectCycle(head)<<endl;

    removeCycle(head);
    cout<<detectCycle(head)<<endl;

    display(head);

    return 0;
}