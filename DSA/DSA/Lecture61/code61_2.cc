#include<iostream>
using namespace std;

class kQueue{
    public:
        int *arr; // array to store elements of the queue
        int *front; // array to store front index of each queue
        int *rear; // array to store rear index of each queue
        int *next; // array to store the next index of each element
        int n; // total size of the queue
        int k; // number of queues
        int freeSpot; // index of the first free spot in the array

    public:
        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];

            // Initialize front and rear indices for each queue
            for (int i = 0; i < k; i++)
            {
                front[i] = -1;
                rear[i] = -1;
            }
            
            next = new int[n];

            // Initialize next array to point to the next index
            for (int i = 0; i < n; i++)
            {
                next[i] = i+1;
            }
            
            next[n-1] = -1;

            arr = new int[n];
            freeSpot = 0;
        }

        void enqueue(int val, int qn){
            // Check for overflow
            if (freeSpot == -1)
            {
                cout<<"No empty space is present"<<endl;
                return;
            }

            // Find the first free index
            int index = freeSpot;

            // Update freeSpot to the next available spot
            freeSpot = next[freeSpot];

            // Check if it is the first element in the queue
            if (front[qn-1] == -1)
            {
                front[qn-1] = index;
            }
            else{
                next[rear[qn-1]] = index;
            }
            
            // Update next index to -1
            next[index] = -1;

            // Update rear index
            rear[qn-1] = index;

            // Insert the element into the queue
            arr[index] = val;
            
        }

        int dequeue(int qn){
            // Check for underflow
            if (front[qn-1] == -1)
            {
                cout<<"queue underflow"<<endl;
                return -1;
            }

            // Find the index of the front element
            int index = front[qn-1];

            // Update front index to the next element
            front[qn-1] = next[index];

            // Manage the freeSpot
            next[index] = freeSpot;
            freeSpot = index;

            return arr[index];
            
        }

};

int main(){

    kQueue q(10, 3);

    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    cout<<q.dequeue(1)<<endl;


}
