/*
*Absolutely! Let's dive into the Sieve of Eratosthenes algorithm from first principles and then use it to solve your problem.

First Principles Thinking:
1. What is a Prime Number?
   - A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
   - Examples: 2, 3, 5, 7, 11, 13, ...

2. How Do We Usually Find Primes?
   - Naive approach: For each number n, check if any number from 2 to n-1 divides it.
   - Better approach: Check only up to √n, because if n = a * b and a > √n, then b must be < √n.
   - But this is still slow for finding many primes, as we repeat work.

3. Key Insight: Multiples of Primes
   - If p is prime, then 2p, 3p, 4p, ... are not prime (they're divisible by p).
   - Example: 2 is prime, so 4, 6, 8, 10, ... are not prime.
   - Similarly, multiples of 3 (6, 9, 12, ...), 5 (10, 15, 20, ...), etc., are not prime.

4. Efficiency Observation:
   - When marking multiples of p, we can start at p² instead of 2p.
   - Why? Because smaller multiples (2p, 3p, ...) would have been marked by smaller primes.
   - Example: When p = 5, no need to mark 10 (2 * 5) or 15 (3 * 5); they're already marked by 2 and 3.

5. The Sieve of Eratosthenes Algorithm:
   a. Make a list of all numbers from 2 to n.
   b. Start with the smallest unmarked number; it's prime.
   c. Mark all its multiples as not prime.
   d. Repeat b & c until you reach √n.
   e. All unmarked numbers are prime.

Visual Example (n = 30):
1. List: 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29
2. 2 is prime: 2 3 ~~4~~ 5 ~~6~~ 7 ~~8~~ 9 ~~10~~ 11 ~~12~~ 13 ~~14~~ 15 ~~16~~ 17 ~~18~~ 19 ~~20~~ 21 ~~22~~ 23 ~~24~~ 25 ~~26~~ 27 ~~28~~ 29
3. 3 is prime: 2 3 ~~4~~ 5 ~~6~~ 7 ~~8~~ ~~9~~ ~~10~~ 11 ~~12~~ 13 ~~14~~ ~~15~~ ~~16~~ 17 ~~18~~ 19 ~~20~~ ~~21~~ ~~22~~ 23 ~~24~~ 25 ~~26~~ ~~27~~ ~~28~~ 29
4. 5 is prime (start at 5²=25): 2 3 ~~4~~ 5 ~~6~~ 7 ~~8~~ ~~9~~ ~~10~~ 11 ~~12~~ 13 ~~14~~ ~~15~~ ~~16~~ 17 ~~18~~ 19 ~~20~~ ~~21~~ ~~22~~ 23 ~~24~~ ~~25~~ ~~26~~ ~~27~~ ~~28~~ 29
5. Stop at √30 ≈ 5.47
6. Primes: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29

Now, let's solve your problem using the Sieve of Eratosthenes:

*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        
        // Step 1: Create a boolean array "isPrime[0..n]" and initialize
        //         all entries as true. A value in isPrime[i] will be
        //         false if i is not a prime, else true.
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime
        
        // Step 2: Use the Sieve of Eratosthenes algorithm
        for (int i = 2; i * i < n; ++i) {
            // If isPrime[i] is not changed, then it is a prime
            if (isPrime[i]) {
                // Update all multiples of i starting from i * i.
                // We start from i * i because if a smaller number
                // (say j) divides i, then j * i would have been
                // already marked by j.
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        // Step 3: Count the number of prime numbers
        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                ++count;
            }
        }
        
        return count;
    }
};

/*

Let's break down the solution:

1. Edge Case (n ≤ 2):
   - There are no prime numbers less than 2, so return 0.

2. Initialize `isPrime` Array:
   - Create a boolean vector `isPrime` of size `n`, all set to `true`.
   - Set `isPrime[0]` and `isPrime[1]` to `false` because 0 and 1 are not prime.

3. Apply Sieve of Eratosthenes:
   - Iterate `i` from 2 to √n (i.e., `i * i < n`).
   - If `isPrime[i]` is `true`, it means `i` is prime.
   - Mark all multiples of `i` starting from `i * i` up to `n` as not prime.
   - We start from `i * i` because smaller multiples would have been marked by smaller primes.

4. Count Prime Numbers:
   - After the sieve, `isPrime[i]` is `true` if and only if `i` is prime.
   - Iterate from 2 to n-1 and count how many are still marked as prime.

Time Complexity:
- Outer loop: O(√n)
- Inner loop: Each number is marked about log(log n) times (advanced result from number theory).
- Total: O(n log log n), which is nearly linear.

Space Complexity:
- O(n) for the `isPrime` vector.

The beauty of the Sieve of Eratosthenes lies in its simplicity and efficiency:
1. It's based on a fundamental property of prime numbers.
2. It avoids redundant work by marking multiples.
3. It's nearly linear in time complexity, making it incredibly fast.

This algorithm, devised by Eratosthenes (276–194 BCE), is a prime example of how deep insights into a problem's structure can lead to elegantly simple and highly efficient solutions. It transforms the task from "test each number individually" to "systematically eliminate non-primes," showcasing the power of first principles thinking in algorithm design.

*/