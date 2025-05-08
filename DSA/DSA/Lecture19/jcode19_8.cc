/// SET

#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int>s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);

    for (auto i : s)
    {
        cout<<i<<endl;
    }

    cout<<endl<<'\n'; 

    // set<int>::iterator it = s.begin();
    // it++;
    // s.erase(it);

    s.erase(s.begin());
    // s.erase(s.begin()+2);
    for (auto i : s)
    {
        cout<<i<<endl;
    }

    cout<<endl<<'\n'; 

    cout<<"5 is present or not: "<<s.count(5)<<endl;

    cout<<endl<<'\n'; 

    set<int> mySet = {5, 2, 1, 3, 4}; // Automatically sorted: {1, 2, 3, 4, 5}

    // Insertion
    mySet.insert(6); // {1, 2, 3, 4, 5, 6}
    mySet.insert(3); // Duplicate, no effect

    // Search
    auto it = mySet.find(4);
    if (it != mySet.end()) {
        cout << "Element 4 found in the set" << endl;
    }

    // Removal
    mySet.erase(1); // {2, 3, 4, 5, 6}

    // Set Operations
    set<int> anotherSet = {4, 5, 6, 7, 8};
    set<int> unionSet, intersectionSet, differenceSet, symDiffSet;

    // set_union(mySet.begin(), mySet.end(), anotherSet.begin(), anotherSet.end(), inserter(unionSet, unionSet.begin()));
    // set_intersection(mySet.begin(), mySet.end(), anotherSet.begin(), anotherSet.end(), inserter(intersectionSet, intersectionSet.begin()));
    // set_difference(mySet.begin(), mySet.end(), anotherSet.begin(), anotherSet.end(), inserter(differenceSet, differenceSet.begin()));
    // set_symmetric_difference(mySet.begin(), mySet.end(), anotherSet.begin(), anotherSet.end(), inserter(symDiffSet, symDiffSet.begin()));

    cout << "Union: ";
    for (int num : unionSet) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
/*
*Sure, I'll explain sets in C++ in detail, covering topics, subtopics, examples, and following a first principles thinking approach.

First Principles Thinking:
- In programming, we often need to work with collections of unique elements, where duplicates are not allowed.
- The set data structure is designed to store and maintain a collection of unique elements, sorted in a specific order (typically ascending or descending).
- Sets provide efficient operations for inserting, removing, and searching elements, as well as performing set operations like union, intersection, and difference.

I. What is a Set?
   A. A set is an associative container in C++ that stores a collection of unique elements in a specific order.
   B. It is an abstract data type (ADT) that supports the following main operations:
      1. `insert(element)`: Inserts an element into the set, if it's not already present.
      2. `erase(element)`: Removes an element from the set, if it exists.
      3. `count(element)`: Returns the number of occurrences of an element in the set (0 or 1 since elements are unique).
      4. `find(element)`: Returns an iterator pointing to the element in the set, if it exists.

II. Types of Sets in C++:
   A. `std::set`: A set that stores unique elements in sorted order (by default, ascending order).
   B. `std::multiset`: A set that allows multiple instances of the same element, sorted in ascending order.

III. Set Operations in C++:
   A. `union`: Combines two sets and returns a new set containing all unique elements from both sets.
   B. `intersection`: Returns a new set containing only the elements that are present in both sets.
   C. `difference`: Returns a new set containing elements that are in the first set but not in the second set.
   D. `symmetric_difference`: Returns a new set containing elements that are in either set but not in both sets.

IV. Advantages of Sets:
   A. Unique elements: Sets automatically discard duplicate elements.
   B. Sorted order: Elements are stored in sorted order, making searching and other operations efficient.
   C. Efficient operations: Insertion, removal, and search operations have an average time complexity of O(log n).

V. Disadvantages of Sets:
   A. No direct access by index: Sets do not support direct access to elements by index or position.
   B. Overhead: Sets have a higher memory overhead compared to arrays or vectors due to their internal data structure (e.g., self-balancing binary search tree).

VI. Example Usage:


Output:
```
Element 4 found in the set
Union: 2 3 4 5 6 7 8
```

In this example, we create a `std::set` called `mySet` and perform various operations like insertion, search, removal, and set operations (union, intersection, difference, and symmetric difference). The output demonstrates the uniqueness of elements in a set and the ability to perform set operations using standard algorithms.

Sets are particularly useful when you need to work with collections of unique elements and perform operations like searching, inserting, removing, and combining sets efficiently. However, if you need to access elements by index or position, other containers like vectors or arrays might be more suitable.
*/