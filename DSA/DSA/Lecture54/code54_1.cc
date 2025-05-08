#include<iostream>
#include<stack>

using namespace std;

    // Stack Implementation

    // Stack class
    class Stack{
        //properties
        public:
            int *arr;
            int top;
            int size;
        
        //behaviour
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }
        void push(int element){
            if (top < size - 1)
            {
                top++;
                arr[top] = element;
            }
            else
            {
                cout<<"Stack Overflow"<<endl;
                return;
            }
        }

        void pop(){
            if (top >= 0)
            {
                top--;
            }
            else
            {
                cout<<"Stack Underflow"<<endl;
                return;
            }
        }  

        int peek(){
            if (top >= 0)
            {
                return arr[top];
            }
            else
            {
                cout<<"Stack is empty"<<endl;
                return -1;
            }
        }

        int peek(int index){
            if (top - index >= 0)
            {
                return arr[top - index];
            }
            else
            {
                cout<<"Invalid index"<<endl;
                return -1;
            }
        }

        bool empty(){
            if (top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        int getSize(){
            return top + 1;
        }

         
    };

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;

    if (st.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    

}
