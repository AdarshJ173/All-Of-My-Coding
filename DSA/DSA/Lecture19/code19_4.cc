/// LISTS

#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int>l;

    cout<<endl<<'\n';

    list<int>n(5,100);
    cout<<"Printing n:"<<endl;
    for (int i : n)
    {
        cout << i << " ";
    }

    cout<<endl<<'\n';

    l.push_back(1);
    l.push_front(2);

    cout<<"Printing l:"<<endl;
    for (int i : l)
    {
        cout << i << " ";
    }


    cout<<endl<<'\n';

    l.erase(l.begin());
    cout<<"After Erase: "<<endl;
    for (int i : l)
    {
        cout<<i<<" ";
    }
    
    // l.pop_back();
    // l.pop_front();
    
    cout<<endl<<'\n';

    cout<<"Size of list: "<<l.size()<<endl;
}

/*
*Certainly, I'll explain lists in C++ in detail, covering topics, subtopics, examples, and following a first principles thinking approach.
First Principles Thinking:

In programming, we often need to work with collections of data that can grow or shrink dynamically.
While arrays and vectors are efficient for sequential access, they are not suitable for frequent insertions or removals at arbitrary positions.
Lists provide a flexible and efficient data structure for such operations, allowing constant-time insertion and removal at any position.

I. What is a List?

A list is a sequence container in C++ that stores elements in a non-contiguous manner, unlike arrays or vectors.
Elements in a list are linked together using pointers, forming a chain-like structure.
Each element in a list contains a value and pointers to the previous and next elements (doubly-linked list).

II. Types of Lists in C++:
A. std::list: A doubly-linked list, part of the C++ Standard Template Library (STL).
B. std::forward_list: A singly-linked list, introduced in C++11.
III. Advantages of Lists:
A. Constant-time insertion and removal at any position.
B. Efficient for frequently adding or removing elements at arbitrary positions.
C. Dynamic size (no need to pre-allocate memory).
IV. Disadvantages of Lists:
A. Sequential access is slower than arrays or vectors (due to non-contiguous memory layout).
B. Higher memory overhead (each element stores pointers in addition to the value).
V. Common Operations on Lists:
A. Insertion:
1. push_front(): Inserts an element at the beginning of the list.
2. push_back(): Inserts an element at the end of the list.
3. insert(): Inserts an element at a specified position.
B. Removal:
1. pop_front(): Removes the first element from the list.
2. pop_back(): Removes the last element from the list.
3. erase(): Removes an element or a range of elements from the list.
C. Traversal:
1. Using iterators (e.g., begin(), end(), ++, --).
2. Using range-based for loop (since C++11).
D. Sorting:
- sort(): Sorts the elements in the list.
E. Merging and Splicing:
- merge(): Merges two sorted lists into one.
- splice(): Transfers elements from one list to another.

Lists are particularly useful when you need to frequently insert or remove elements at arbitrary positions in a container. They provide constant-time complexity for these operations, which is more efficient than the linear-time complexity of vector insertions or removals at positions other than the end. However, for sequential access and element retrieval, vectors are generally more efficient due to their contiguous memory layout.
*/