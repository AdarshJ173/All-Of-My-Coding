// Subarray in C++ is a contiguous part of the array. 
// An array that consists of a single element is also considered as a subarray. 
// More formally, a subarray is a contiguous sequence of elements within an array. 
// For example, if the array is {1, 2, 3, 4}, then some of the subarrays are {1}, {2}, {3}, {4}, {1, 2}, {2, 3}, {3, 4}, {1, 2, 3}, {2, 3, 4}, and {1, 2, 3, 4}.

/*
-continues part of the array
-number of subarrays of an array with n elements = nC2 + n = n*(n+1)/2
*/

//?---------------------------------------------------------------------------------------------------------------------------

// Subsequence in C++ is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements. 
// For example, the sequence {A, B, D} is a subsequence of {A, B, C, D, E, F}, obtained after removal of elements C, E, and F. 
// In general, a sequence is a subsequence of itself. 
// The empty sequence is a subsequence of any sequence.

/*
a subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaining elements.
number of subsequent of  an array with n elements = 2^n
*/

// every subarray is a subsequence but every subsequence is not a subarray
/*

┌───────────────────────────────┐
│  All Subsequences             │
│                               │
│ {}, {A}, {B}, {C},            │
│ {A, B}, {A, C}, {B, C},       │
│ {A, B, C}                     │
│                               │
│ ┌─────────────────────┐       │
│ │  Subarrays          │       │
│ │                      │       │
│ │ {A}, {B}, {C},        │       │
│ │ {A, B}, {B, C},       │       │
│ │ {A, B, C}             │       │
│ └─────────────────────┘       │
└───────────────────────────────┘


*/