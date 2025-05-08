/// ARRAYS

/*
/ Absolutely, let's explore arrays in C++ from a first-principles perspective, using clear explanations and examples:

**1. Imagine a Shoe Rack**

Think of a shoe rack that can hold multiple pairs of shoes. Each pair of shoes has a designated spot on the rack. In C++, an array is similar. It's a collection of items of the same data type that are stored together in a contiguous block of memory locations. Just like the shoe rack has designated slots, each item in an array has a unique position (index) to access it.

**2. Analogy: Array vs. Individual Variables**

Imagine you have several individual variables to store exam grades for different subjects:

```c++
int mathGrade;
int physicsGrade;
int chemistryGrade;
```

This approach works, but it can become cumbersome as you add more subjects. An array offers a more organized way to manage such data.

**3. Declaring and Initializing an Array**

Here's how to declare and initialize an array in C++ to store exam grades for five subjects:

```c++
int grades[5] = {80, 95, 77, 90, 88}; // Array declaration with initialization
```

  - `int grades[5]`: This declares an array named `grades` that can hold up to 5 integers (data type `int`). The number within the square brackets specifies the size of the array.
  - `{80, 95, 77, 90, 88}`: This initializes the array with values for each element. The values are enclosed in curly braces and separated by commas.

**4. Accessing Elements by Index**

Just like you access a specific pair of shoes on the rack by its location, you can access elements in an array using their index (position). The index starts from 0 (zero-based indexing). Here's how to access the physics grade in the above example:

```c++
int physicsGrade = grades[1]; // Accessing the element at index 1 (physics grade)
```

**5. Key Points to Remember**

  - Elements in an array must be of the same data type.
  - The size of the array is fixed at declaration and cannot be changed later.
  - You can access elements using their index within the array bounds (0 to size-1). Trying to access an element outside the bounds can lead to errors.

**6. Benefits of Using Arrays**

  - Arrays provide a more organized way to store and manage collections of similar data.
  - They improve code readability and maintainability compared to using many individual variables.
  - Arrays can be efficient for memory usage when dealing with large amounts of similar data.

I hope this explanation helps you understand arrays in C++ from a first-principles approach. Feel free to ask if you have any further questions or want to explore array operations like iterating through elements!
*/

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  cout<<"Printing the fourthary array"<<endl;

  for (int i = 0 ; i<size; i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<"Printing Done";
}

int main(){

  int number[15];

  cout<<endl<<"Value at 13 index is : " << number[13]<<endl;

  cout<<endl<<"Value at 24 index is : " << number[24]<<endl;
  //if i want to access 24 index than i should make an array of size 25 atleast.

  int secnum[3] = {5,7,11};

  cout<<endl<<"Value at 2 index of array secnum is : " << secnum[2]<<endl;

cout<<endl;
///--------------------------------------------------------

  int thirdary[15] = {2,7};

  int n = 15;
cout<<endl;

  printArray(thirdary, 15);

  int thirdsize = sizeof(thirdary)/sizeof(int);
  cout<<endl<<endl<<"size of third is: "<<thirdary<<endl;

  // cout<<"Printing the array"<<endl;

  // for (int i = 0 ; i<n; i++)
  // {
  //   cout<<thirdary[i]<<" ";
  // }
  
cout<<endl;
///--------------------------------------------------------

  int fourthary[10] = {0};
  n = 10;
cout<<endl;

  printArray(fourthary, 15);


  // cout<<"Printing the fourthary array"<<endl;
  // for (int i = 0 ; i<n; i++)
  // {
  //   cout<<fourthary[i]<<" ";
  // }


cout<<endl;

///--------------------------------------------------------

  int fifthary[10] = {1};
  n = 10;
  cout<<endl;
  printArray(fifthary, 15);

  // cout<<"Printing the fifthary array"<<endl;
  // for (int i = 0 ; i<n; i++)
  // {
  //   cout<<fifthary[i]<<" ";
  // }

  //* to find size

  int fifthsize = sizeof(fifthary)/sizeof(int);
  cout<<endl<<endl<<"size of fifth is: "<<fifthary<<endl;


  cout<<endl<<"ALL IS WELL"<<endl;

  /*
  1.how to initialize any value to the entire array
  ans : ///Absolutely, let's explore how to initialize all elements in a C++ array with a specific value from a first-principles perspective:

**1. Imagine Filling Boxes**

Think of an array like a row of boxes. You want to put the same item (value) in all the boxes. In C++, you can achieve this during array initialization or using a loop.

**2. Initialization During Declaration**

The most straightforward approach is to provide the desired value within curly braces `{}` when you declare the array. Here's an example:

```c++
int numbers[5] = {8, 8, 8, 8, 8}; // All elements initialized to 8
```

In this example, all five elements of the `numbers` array are initialized to the value 8.

**3. Looping for Initialization**

If you already have a declared array or want to fill it with a value after declaration, you can use a loop. Here's how it works:

```c++
int scores[10];

for (int i = 0; i < 10; i++) {
  scores[i] = 50; // Assigning 50 to each element
}
```

**Explanation:**

- The `scores` array is declared with a size of 10 (10 boxes).
- The `for` loop iterates 10 times (once for each element).
- Inside the loop, the value 50 is assigned to the current element using the index `i`. This process repeats for all elements.

**4. Key Points to Remember**

  - The initialization values within curly braces during declaration must be of the same data type as the array.
  - The loop approach allows you to assign any value during runtime or based on calculations.
  - Make sure the loop iterates the correct number of times to cover all elements in the array.

I hope this explanation helps you understand array initialization in C++ from a first-principles approach! Feel free to ask if you have any further questions or want to see examples with different data types or loop variations.
  */
}


/*
Absolutely, let's explore functions and arrays in C++ from a first-principles perspective, using clear explanations and examples:

**1. Imagine Working in a Kitchen**

Think of yourself in a kitchen. You have various tools (functions) like a whisk, a peeler, and a chopping knife. Each tool has a specific task it performs on ingredients (data). An array, like a bowl or a platter, can hold multiple ingredients.

**2. Why Use Functions with Arrays?**

Just like you wouldn't use the same tool for every cooking task, you might not want to write the same code repeatedly to perform operations on arrays. Functions help in this regard.

**3. Breakdown: Functions and Arrays**

There are two main ways functions and arrays work together in C++:

  - **Functions Accepting Arrays:** You can pass an array as an argument to a function. The function can then work on the elements of the array without directly modifying the original array in the main program. Imagine giving a specific ingredient (array) to a tool (function) for processing.

  - **Functions Returning Arrays:** In some cases, a function might create and return a new array as its output. This is like a tool (function) giving you a new processed ingredient (array) based on your original one.

**4. Example: Function Accepting an Array**

Here's an example of a function that calculates the average of elements in an array:

```c++
#include <iostream>

using namespace std;

void calculateAverage(int numbers[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += numbers[i]; // Add each element to the sum
  }
  double average = (double)sum / size; // Calculate average
  cout << "The average is: " << average << endl;
}

int main() {
  int scores[5] = {80, 95, 77, 90, 88};
  int numScores = sizeof(scores) / sizeof(scores[0]); // Get array size

  calculateAverage(scores, numScores); // Pass the array and its size

  return 0;
}
```

**Explanation:**

- The `calculateAverage` function takes an array `numbers` of integers and its size `size` as arguments.
- It calculates the average of the elements in the `numbers` array and prints it.
- The `main` function calls `calculateAverage`, passing the `scores` array and its size.

**5. Key Points to Remember**

  - Functions can process arrays without modifying the original array in the main program.
  - When passing an array to a function, you typically also pass its size as a separate argument.
  - Functions can return newly created arrays as output.

*/

































