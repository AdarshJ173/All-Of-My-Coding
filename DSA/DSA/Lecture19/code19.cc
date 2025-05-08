/// STL - STANDARD TEMPLATE LIBRARY

/*
Sure, I'll explain the Standard Template Library (STL) in C++ with algorithms and containers, covering topics, subtopics, and examples, and following a first principles thinking approach.

First Principles Thinking:
- In programming, we often need to work with collections of data (e.g., arrays, lists, sets, etc.).
- Organizing and manipulating these collections can be a complex task, requiring efficient data structures and algorithms.
- The STL provides a standardized and reusable solution for these common programming tasks, ensuring consistency and efficiency across different platforms and compilers.

I. STL Containers:
   A. Sequence Containers:
      1. `vector`: A dynamic array that can change its size automatically.
         - Example: `std::vector<int> v = {1, 2, 3, 4, 5};`
      2. `list`: A doubly-linked list that allows constant-time insertion and deletion at any position.
         - Example: `std::list<std::string> names = {"Alice", "Bob", "Charlie"};`
      3. `deque` (double-ended queue): A dynamic array that provides constant-time insertion and deletion at both ends.
         - Example: `std::deque<double> numbers = {1.2, 3.4, 5.6};`

   B. Associative Containers:
      1. `set`: A collection of unique elements sorted in ascending order.
         - Example: `std::set<int> numbers = {4, 2, 1, 3, 5};` (sorted: 1, 2, 3, 4, 5)
      2. `map`: A collection of key-value pairs, where the keys are unique and sorted in ascending order.
         - Example: `std::map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 28}};`

   C. Container Adaptors:
      1. `stack`: A Last-In-First-Out (LIFO) data structure, commonly implemented using `deque` or `vector`.
         - Example: `std::stack<int> s;`
      2. `queue`: A First-In-First-Out (FIFO) data structure, commonly implemented using `deque` or `list`.
         - Example: `std::queue<std::string> q;`
      3. `priority_queue`: A queue where the highest-priority element is always at the front, commonly implemented using `vector`.
         - Example: `std::priority_queue<int> pq;`

II. STL Algorithms:
    A. Non-modifying Sequence Operations:
       1. `accumulate`: Calculates the sum (or other operation) of elements in a range.
          - Example: `int sum = std::accumulate(v.begin(), v.end(), 0);`
       2. `count`: Counts the number of occurrences of a specific element in a range.
          - Example: `int count_threes = std::count(v.begin(), v.end(), 3);`

    B. Modifying Sequence Operations:
       1. `transform`: Applies a function to each element in a range and stores the result in another range.
          - Example: `std::transform(v.begin(), v.end(), v.begin(), [](int x) { return x * 2; });` (doubles each element)
       2. `sort`: Sorts the elements in a range.
          - Example: `std::sort(v.begin(), v.end());`

    C. Partitioning Operations:
       1. `partition`: Partitions a range into two parts based on a predicate.
          - Example: `auto it = std::partition(v.begin(), v.end(), [](int x) { return x % 2 == 0; });` (partitions even and odd numbers)

    D. Searching Operations:
       1. `find`: Finds the first occurrence of a specific element in a range.
          - Example: `auto it = std::find(v.begin(), v.end(), 3);`
       2. `binary_search`: Checks if an element exists in a sorted range using binary search.
          - Example: `bool found = std::binary_search(v.begin(), v.end(), 3);`

    E. Iterator Operations:
       1. `advance`: Advances an iterator by a specified number of positions.
          - Example: `auto it = v.begin(); std::advance(it, 3);` (advances `it` by 3 positions)
       2. `distance`: Calculates the distance between two iterators.
          - Example: `int dist = std::distance(v.begin(), v.end());` (distance is the size of the vector)

By using the STL containers and algorithms, you can write efficient and maintainable code for various data processing tasks without having to implement complex data structures and algorithms from scratch. The STL promotes code reusability, portability, and consistency across different platforms and compilers.

These are just a few examples of the various containers and algorithms available in the STL. The library provides many more utilities and features to help you write powerful and efficient C++ code.
*/

/*
Sure, I'll explain the C++ Standard Template Library (STL) containers and algorithms in detail, covering topics, subtopics, examples, and following a first principles thinking approach.

First Principles Thinking:
- In programming, we often deal with collections of data (e.g., arrays, lists, sets, maps, etc.).
- Organizing and manipulating these collections efficiently is crucial for writing high-performance code.
- The STL provides a standardized and reusable solution for common data structure and algorithm needs, ensuring consistency and efficiency across different platforms and compilers.

A. Containers:

1. Sequence Containers:
   a. `array`: A fixed-size container that stores elements contiguously in memory.
      - Example: `std::array<int, 5> arr = {1, 2, 3, 4, 5};`
   b. `vector`: A dynamic array that can change its size automatically.
      - Example: `std::vector<int> v = {1, 2, 3, 4, 5};`
   c. `deque` (double-ended queue): A dynamic array that provides constant-time insertion and deletion at both ends.
      - Example: `std::deque<double> d = {1.2, 3.4, 5.6};`
   d. `list`: A doubly-linked list that allows constant-time insertion and deletion at any position.
      - Example: `std::list<std::string> names = {"Alice", "Bob", "Charlie"};`
   e. `forward_list`: A singly-linked list that allows constant-time insertion and deletion at the beginning.
      - Example: `std::forward_list<int> fl = {1, 2, 3, 4, 5};`

2. Container Adaptors:
   a. `stack`: A Last-In-First-Out (LIFO) data structure, commonly implemented using `deque` or `vector`.
      - Example: `std::stack<int> s;`
   b. `queue`: A First-In-First-Out (FIFO) data structure, commonly implemented using `deque` or `list`.
      - Example: `std::queue<std::string> q;`
   c. `priority_queue`: A queue where the highest-priority element is always at the front, commonly implemented using `vector`.
      - Example: `std::priority_queue<int> pq;`

3. Associative Containers:
   a. `set`: A collection of unique elements sorted in ascending order.
      - Example: `std::set<int> numbers = {4, 2, 1, 3, 5};` (sorted: 1, 2, 3, 4, 5)
   b. `map`: A collection of key-value pairs, where the keys are unique and sorted in ascending order.
      - Example: `std::map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 28}};`
   c. `multiset`: A collection of elements that allows duplicates and is sorted in ascending order.
      - Example: `std::multiset<int> ms = {1, 2, 2, 3, 3, 3};`
   d. `multimap`: A collection of key-value pairs that allows duplicate keys, sorted by keys in ascending order.
      - Example: `std::multimap<int, std::string> grades = {{90, "A"}, {80, "B"}, {90, "A"}, {70, "C"}};`

4. Unordered Associative Containers:
   a. `unordered_set`: A collection of unique elements, where elements are stored using a hash table for fast retrieval.
      - Example: `std::unordered_set<int> numbers = {4, 2, 1, 3, 5};`
   b. `unordered_map`: A collection of key-value pairs, where keys are unique and stored using a hash table for fast retrieval.
      - Example: `std::unordered_map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 28}};`
   c. `unordered_multiset`: A collection of elements that allows duplicates and is stored using a hash table.
      - Example: `std::unordered_multiset<int> ums = {1, 2, 2, 3, 3, 3};`
   d. `unordered_multimap`: A collection of key-value pairs that allows duplicate keys, stored using a hash table.
      - Example: `std::unordered_multimap<int, std::string> grades = {{90, "A"}, {80, "B"}, {90, "A"}, {70, "C"}};`

B. Algorithms:

1. Non-modifying Sequence Operations:
   a. `binary_search`: Checks if an element exists in a sorted range using binary search.
      - Example: `bool found = std::binary_search(v.begin(), v.end(), 3);`
   b. `lower_bound` and `upper_bound`: Find the first and last positions respectively where an element can be inserted without violating the sorted order.
      - Example: `auto lower = std::lower_bound(v.begin(), v.end(), 3);`
      - Example: `auto upper = std::upper_bound(v.begin(), v.end(), 3);`
   c. `min` and `max`: Find the minimum and maximum elements in a range.
      - Example: `int min_val = std::min({1, 2, 3, 4, 5});`
      - Example: `int max_val = std::max({1, 2, 3, 4, 5});`

2. Modifying Sequence Operations:
   a. `reverse`: Reverses the order of elements in a range.
      - Example: `std::reverse(v.begin(), v.end());`
   b. `rotate`: Rotates the elements in a range by a specified number of positions.
      - Example: `std::rotate(v.begin(), v.begin() + 2, v.end());`
   c. `sort`: Sorts the elements in a range.
      - Example: `std::sort(v.begin(), v.end());`
   d. `swap`: Swaps the values of two objects or ranges.
      - Example: `std::swap(a, b);`

These are just a few examples of the various containers and algorithms available in the STL. The library provides many more utilities and features to help you write powerful and efficient C++ code.

By using the STL containers and algorithms, you can write efficient and maintainable code for various data processing tasks without having to implement complex data structures and algorithms from scratch. The STL promotes code reusability, portability, and consistency across different platforms and compilers.

Continuing from Modifying Sequence Operations:

3. Partitioning Operations:
   a. `partition`: Partitions a range into two parts based on a predicate (a function that returns true or false).
      - Example: `auto it = std::partition(v.begin(), v.end(), [](int x) { return x % 2 == 0; });` (partitions even and odd numbers)
   b. `stable_partition`: Same as `partition`, but preserves the relative order of equivalent elements.

4. Removing Operations:
   a. `remove`: Removes all elements equal to a given value from a range, by overwriting them with the last element.
      - Example: `auto it = std::remove(v.begin(), v.end(), 3);` (removes all occurrences of 3)
   b. `remove_if`: Removes all elements that satisfy a given predicate from a range, by overwriting them with the last element.
      - Example: `auto it = std::remove_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });` (removes all even numbers)

5. Mutating Sequence Operations:
   a. `transform`: Applies a function to each element in a range and stores the result in another range.
      - Example: `std::transform(v.begin(), v.end(), v.begin(), [](int x) { return x * 2; });` (doubles each element)
   b. `replace`: Replaces all occurrences of an element with a new value in a range.
      - Example: `std::replace(v.begin(), v.end(), 3, 10);` (replaces all occurrences of 3 with 10)
   c. `replace_if`: Replaces all elements that satisfy a given predicate with a new value in a range.
      - Example: `std::replace_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; }, 0);` (replaces all even numbers with 0)

6. Set Operations:
   a. `merge`: Merges two sorted ranges into a new sorted range.
      - Example: `std::vector<int> merged;` `std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(merged));`
   b. `set_union`: Computes the union of two sorted ranges.
      - Example: `std::vector<int> result(10);` `auto it = std::set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());`
   c. `set_intersection`: Computes the intersection of two sorted ranges.
      - Example: `std::vector<int> result(10);` `auto it = std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());`
   d. `set_difference`: Computes the difference between two sorted ranges.
      - Example: `std::vector<int> result(10);` `auto it = std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());`

7. Heap Operations:
   a. `make_heap`: Constructs a heap from a range of elements.
      - Example: `std::make_heap(v.begin(), v.end());`
   b. `push_heap`: Pushes a new element onto the heap, preserving the heap property.
      - Example: `v.push_back(10);` `std::push_heap(v.begin(), v.end());`
   c. `pop_heap`: Removes the top element from the heap, preserving the heap property.
      - Example: `std::pop_heap(v.begin(), v.end());` `v.pop_back();`

8. Numerical Operations:
   a. `accumulate`: Calculates the sum (or other operation) of elements in a range.
      - Example: `int sum = std::accumulate(v.begin(), v.end(), 0);`
   b. `inner_product`: Computes the inner product of two ranges of elements.
      - Example: `int result = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0);`
   c. `partial_sum`: Computes the partial sums of a range of elements.
      - Example: `std::vector<int> partial_sums(v.size());` `std::partial_sum(v.begin(), v.end(), partial_sums.begin());`

These are just some of the many algorithms provided by the STL. The library offers a wide range of algorithms for various tasks, including sorting, searching, manipulating sequences, and performing numerical operations.

By using the STL algorithms, you can write more concise and efficient code for common data processing tasks, without having to implement these algorithms from scratch. The algorithms are designed to be generic, reusable, and consistent across different platforms and compilers.
*/