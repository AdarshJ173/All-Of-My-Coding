/// MAP

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    map<int,string>m;

    m[1] = "AAJ";
    m[2] = "Aarav";
    m[13] = "Aarnavy";

    m.insert({5,"Arnav"});

    cout<<"Before Erase"<<endl;
    for ( auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"finding 13---> "<<m.count(13)<<endl;
    cout<<"finding 13---> "<<m.count(-13)<<endl;
    cout<<endl<<'\n';

    cout<<"After Erase"<<endl;
    m.erase(13);
        for ( auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    // auto it = m.find(5);
    // for(auto i = it; i!=m.end();i++){
    //     cout<<(*i).first<<" "<<i->second<<endl;
    // }
    

    cout<<endl<<'\n';

    map<string, int> ages; // Create an empty map

    // Insertion
    ages.insert(make_pair("Alice", 25));
    ages.insert({"Bob", 30});
    ages["Charlie"] = 28; // Alternative insertion using operator[]

    // Access
    cout << "Alice's age: " << ages["Alice"] << endl; // Output: Alice's age: 25

    // Search
    auto it = ages.find("Bob");
    if (it != ages.end()) {
        cout << "Bob's age: " << it->second << endl; // Output: Bob's age: 30
    }

    // Removal
    ages.erase("Charlie");

    // Iteration
    cout << "All ages: " << endl;
    for (const auto& pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

/*
Sure, I'll explain maps in C++ in detail, covering topics, subtopics, examples, and using the using namespace std; approach.
First Principles Thinking:

In programming, we often need to work with collections of key-value pairs, where each key is associated with a value.
The map data structure is designed to store and maintain a collection of unique keys, each associated with a value.
Maps provide efficient operations for inserting, removing, and accessing key-value pairs, as well as iterating over the elements in sorted order based on the keys.

I. What is a Map?
A. A map is an associative container in C++ that stores a collection of key-value pairs.
B. It is an abstract data type (ADT) that supports the following main operations:
1. insert(key, value): Inserts a key-value pair into the map.
2. erase(key): Removes the key-value pair associated with the given key from the map.
3. count(key): Returns the number of occurrences of a key in the map (0 or 1 since keys are unique).
4. find(key): Returns an iterator pointing to the key-value pair in the map, if the key exists.
5. operator[]: Provides direct access to the value associated with a given key.
II. Types of Maps in C++:
A. std::map: A map that stores unique keys and their associated values in sorted order (by default, ascending order of keys).
B. std::multimap: A map that allows multiple instances of the same key, sorted in ascending order of keys.
III. Advantages of Maps:
A. Unique keys: Maps automatically discard duplicate keys.
B. Sorted order: Key-value pairs are stored in sorted order based on the keys, making searching and other operations efficient.
C. Efficient access: Insertion, removal, and search operations have an average time complexity of O(log n).
D. Direct value access: Values can be accessed directly using the key via the operator[].
IV. Disadvantages of Maps:
A. No direct access by index: Maps do not support direct access to elements by index or position.
B. Overhead: Maps have a higher memory overhead compared to arrays or vectors due to their internal data structure (e.g., self-balancing binary search tree).
V. Example Usage:

In this example, we create a std::map called ages that stores strings (names) as keys and integers (ages) as values. We perform various operations like insertion, access, search, removal, and iteration over the key-value pairs.
Maps are particularly useful when you need to work with collections of key-value pairs and perform operations like searching, inserting, removing, and accessing values efficiently based on their associated keys. However, if you don't need to access elements by key or if the order of elements is not important, other containers like vectors or unordered sets might be more suitable.
*/