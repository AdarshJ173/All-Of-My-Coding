/// VECTOR : STL

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    vector<int> a(5,1);
    cout<<"Print a: "<<endl;
    for (int i : a)
    {
        cout<<i<<" ";
    }


    cout<<endl<<'\n';

    vector<int> last(a);
    cout<<"Print last: "<<endl;
    for (int i : last)
    {
        cout<<i<<" ";
    }

    
    
    cout<<endl<<'\n';

    cout<<"Capacity--> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity--> "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity--> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity--> "<<v.capacity()<<endl;
    cout<<"size--> "<<v.size()<<endl;

    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;

    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;

    cout<<"Before Pop"<<endl;
    for (int i : v)
    {
        cout<<i<<" ";
    }
    
    v.pop_back();

    cout<<endl;
    cout<<"After Pop"<<endl;

    for (int i : v)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"Before Clear Size - size is : "<<v.size()<<endl;

    v.clear();
    
    cout<<"After Clear Size - size is : "<<v.size()<<endl;

    cout<<"Capacity--> "<<v.capacity()<<endl;
}

/*

In C++, when working with vectors, there are two important concepts: capacity and size.
Size:
The size of a vector refers to the number of elements currently stored in the vector. It represents the number of valid elements that the vector is holding at any given time. The size can be zero initially (for an empty vector) or can increase or decrease as elements are added or removed from the vector.

Capacity:
The capacity of a vector, on the other hand, refers to the total number of elements that the vector can hold before it needs to allocate more memory. The capacity is always greater than or equal to the size of the vector. When a vector needs to store more elements than its current capacity, it automatically allocates a larger chunk of memory and copies the existing elements into the new memory location.

It's important to note that increasing the capacity of a vector by reallocating memory can be an expensive operation, especially for large vectors. Therefore, if you know the approximate size that your vector will need in advance, it's a good practice to reserve the required capacity upfront using the reserve() function. This can help avoid unnecessary reallocations and improve performance.
Generally, you don't need to worry about the capacity unless you're working with very large vectors or you have specific performance requirements. The vector automatically manages the capacity for you, and it's usually more efficient to let the vector handle the memory management internally.

*/