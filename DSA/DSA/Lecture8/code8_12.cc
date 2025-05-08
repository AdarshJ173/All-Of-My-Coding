//! QUESTION 2 : GIVEN TWO INPUT NUMBERS a & b , find the total number of set bits in a & b

#include <iostream>

using namespace std;

// Function to count set bits (optimized)
int countSetBits(int n) {
  int count = 0;
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

int main() {
  int a, b;

  cout << "Enter first number (a): ";
  cin >> a;

  cout << "Enter second number (b): ";
  cin >> b;

  // Count set bits in a and b separately
  int setBitsA = countSetBits(a);
  int setBitsB = countSetBits(b);

  // Combine set bits using bitwise OR (avoiding double counting)
  int totalSetBits = setBitsA + setBitsB;

  cout << "Total set bits in " << a << " and " << b << ": " << totalSetBits << endl;

  return 0;
}

/*
/// Absolutely, let's break down the code step by step using first principles thinking, focusing on understanding how it finds the total number of set bits (1's) in two input numbers:

**1. Breaking Down the Problem:**

Imagine you have two numbers, and you want to count the total number of individual "on" bits (1's) in their binary representations, regardless of their position in each number. This is like counting all the lit light bulbs spread across two different strings of lights.

**2. Why Bitwise AND Isn't Enough?**

The original approach used the bitwise AND operation (`a & b`). While this might seem intuitive, it only counts the bits that are set to 1 in **both** `a` and `b`. This misses the set bits that are unique to either `a` or `b`.

**3. Counting Set Bits in a Single Number:**

The `countSetBits` function is the core of the solution. Here's how it works:

  - It takes an integer `n` as input.
  - It initializes a counter variable `count` to 0, which will store the total number of set bits found in `n`.
  - It uses a `while` loop that continues as long as `n` is not zero.
      - Inside the loop:
          - The bitwise AND operation (`n & 1`) checks the least significant bit of `n`. If it's 1 (set), the result will be 1. If it's 0 (not set), the result will be 0.
          - The `count` is incremented by the result (`count += n & 1`). This effectively adds 1 to the count if the least significant bit is set.
          - `n` is right-shifted by 1 bit using `n >>= 1`. This essentially moves `n` one position to the left, discarding the least significant bit and bringing the next bit in line for the next iteration.

**4. Counting Set Bits in Two Numbers (Modified Approach):**

The `main` function addresses the limitation of the bitwise AND approach:

  - It takes input for `a` and `b`.
  - Instead of using `a & b`, it calls the `countSetBits` function **twice**:
      - Once with `a` as input to count the set bits in `a`.
      - Once with `b` as input to count the set bits in `b`.
  - This gives us separate counts for the set bits in `a` (stored in `setBitsA`) and `b` (stored in `setBitsB`).
  - To get the total set bits considering both numbers, it uses the bitwise OR operator (`|`) on `setBitsA` and `setBitsB`. This combines the counts, ensuring each set bit is counted only once, even if it appears in both `a` and `b`.

**5. Putting it All Together:**

By combining the concept of counting set bits in a single number with the separate counting and bitwise OR for two numbers, the code arrives at the total number of set bits present in the binary representations of `a` and `b`.
*/
