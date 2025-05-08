    #include<iostream>
    #include<stack>

    using namespace std;
    
    // Stack Implementation using Array

    // Stack class
    class Stack{
        //properties
        public:
            int *arr; // array to store elements
            int top; // index of the top element
            int size; // maximum size of the stack
        
        //behaviour
        Stack(int size){ // constructor to initialize the stack
            this->size = size;
            arr = new int[size]; // dynamic memory allocation for the array
            top = -1; // initialize top as -1 to indicate an empty stack
        }

        void push(int element){ // function to push an element onto the stack
            if (top < size - 1) // check if the stack is not full
            {
                top++; // increment top
                arr[top] = element; // add the element to the top of the stack
            }
            else
            {
                cout<<"Stack Overflow"<<endl; // display error message if stack is full
                return;
            }
        }

        void pop(){ // function to pop an element from the stack
            if (top >= 0) // check if the stack is not empty
            {
                top--; // decrement top to remove the top element
            }
            else
            {
                cout<<"Stack Underflow"<<endl; // display error message if stack is empty
                return;
            }
        }  

        int peek(){ // function to peek at the top element of the stack
            if (top >= 0) // check if the stack is not empty
            {
                return arr[top]; // return the top element
            }
            else
            {
                cout<<"Stack is empty"<<endl; // display error message if stack is empty
                return -1;
            }
        }

        bool empty(){ // function to check if the stack is empty
            if (top == -1) // check if top is at the initial position
            {
                return true; // stack is empty
            }
            else
            {
                return false; // stack is not empty
            }
        }

        int getSize(){ // function to get the current size of the stack
            return top + 1; // return the number of elements in the stack
        }
    };

    int main(){
        // Test the Stack implementation
        Stack stack(5); // create a stack of size 5

        stack.push(1);
        stack.push(2);
        stack.push(3);

        cout << "Top element: " << stack.peek() << endl;

        stack.pop();
        cout << "Top element after pop: " << stack.peek() << endl;

        cout << "Stack size: " << stack.getSize() << endl;

        return 0;
    }