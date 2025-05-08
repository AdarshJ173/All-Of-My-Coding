/// SEGMENTED SIEVE

/**
Here's a detailed explanation of the Segmented Sieve algorithm from a first principles thinking approach, along with C++ code examples:
 * Segmented Sieve: A Memory-Efficient Prime Number Generation Algorithm
 * 
 * First Principles Thinking:
 * 1. What is our goal?
 *    - Generate all prime numbers up to a very large number n (e.g., 10¹²).
 *    - Challenge: Standard Sieve of Eratosthenes needs O(n) space, which is 
 *      infeasible for n = 10¹² (terabytes of RAM!).
 * 
 * 2. Key Insights from Sieve of Eratosthenes:
 *    a. To find primes up to n, we only need to consider factors up to √n.
 *    b. We mark multiples of each prime p starting from p².
 * 
 * 3. Problem with Large n:
 *    - We can't make a boolean array of size n for huge n.
 *    - But... do we really need the entire array at once?
 * 
 * 4. Divide and Conquer Insight:
 *    a. What if we only sieve a small segment of the range at a time?
 *    b. Example: To find primes in [10⁵, 2×10⁵], we don't need to sieve 
 *       the entire range [2, 2×10⁵].
 *    c. We just need:
 *       i.  Primes up to √(2×10⁵) to use as factors.
 *       ii. A boolean array to sieve the range [10⁵, 2×10⁵].
 * 
 * 5. The Segmented Sieve Algorithm:
 *    a. Generate all primes up to √n using basic Sieve of Eratosthenes.
 *    b. Divide [2, n] into smaller segments of size S (e.g., S = √n).
 *    c. For each segment [a, b]:
 *       i.   Create a boolean array of size S.
 *       ii.  For each prime p ≤ √n:
 *            - Find the first multiple of p in [a, b], let's call it m.
 *            - Mark all multiples of p from m onwards in this segment.
 *       iii. Unmarked numbers in this segment are prime.
 *    d. Repeat for all segments.
 * 
 * 6. Why is this efficient?
 *    a. Space: We only need O(√n) for prime factors + O(S) for current segment.
 *    b. Cache Efficiency: Small segments fit in cache, reducing memory accesses.
 *    c. Time: Still O(n log log n) like standard sieve, but with better constants.
 * 
 * 7. Example: Finding primes in [10⁵, 2×10⁵]
 *    a. Generate primes up to √(2×10⁵) ≈ 447 using standard sieve.
 *    b. Create a boolean array of size 10⁵ for the segment.
 *    c. For each prime p ≤ 447:
 *       - Find first multiple m = p * ⌈10⁵/p⌉ in the segment.
 *       - Mark m, m+p, m+2p, ... until end of segment.
 *    d. Remaining true values in the array are primes.
 * 
 * The segmented sieve is a brilliant example of applying first principles:
 * - Recognizing core insights (√n, marking from p²)
 * - Identifying the real bottleneck (memory, not time)
 * - Breaking the problem into manageable parts (segments)
 * - Leveraging system characteristics (cache efficiency)
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to generate primes up to sqrt(n) using basic Sieve of Eratosthenes
vector<int> generateBasePrimes(int n) {
    int sqrtN = sqrt(n);
    vector<bool> isPrime(sqrtN + 1, true);
    vector<int> primes;
    
    for (int i = 2; i <= sqrtN; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= sqrtN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

// Function to apply segmented sieve in the range [a, b]
void segmentedSieve(long long a, long long b, const vector<int>& basePrimes) {
    vector<bool> isPrime(b - a + 1, true);
    
    for (int p : basePrimes) {
        long long start = max((long long)p * p, ((a + p - 1) / p) * p);
        for (long long j = start; j <= b; j += p) {
            isPrime[j - a] = false;
        }
    }
    
    if (a == 1) isPrime[0] = false;
    
    for (long long i = max(2LL, a); i <= b; ++i) {
        if (isPrime[i - a]) {
            cout << i << " ";
        }
    }
}

// Main function to demonstrate segmented sieve
int main() {
    long long n = 1e12;  // We want to find primes up to 10¹²
    int segmentSize = 1e6;  // Size of each segment, typically around √n or L1 cache size
    
    // Generate base primes up to sqrt(n)
    vector<int> basePrimes = generateBasePrimes(sqrt(n));
    
    // Apply segmented sieve to each segment
    for (long long start = 0; start < n; start += segmentSize) {
        long long end = min(start + segmentSize - 1, n - 1);
        segmentedSieve(start, end, basePrimes);
    }
    
    return 0;
}

/*
The code demonstrates the Segmented Sieve algorithm:

1. `generateBasePrimes` Function:
   - Uses the standard Sieve of Eratosthenes to generate all primes up to √n.
   - These primes will be used as factors in the segmented sieve.

2. `segmentedSieve` Function:
   - Takes a range `[a, b]` and the list of base primes.
   - Creates a boolean array `isPrime` of size `b - a + 1` to represent the segment.
   - For each base prime p:
     - Finds the first multiple of p in `[a, b]`, starting from at least p².
     - Marks all its multiples in this segment as composite.
   - Special case: if `a` is 1, mark it as not prime.
   - Outputs all primes found in this segment.

3. `main` Function:
   - Sets the target `n` (e.g., 10¹²) and segment size (e.g., 10⁶).
   - Generates base primes up to √n.
   - Iterates through the entire range `[0, n)` in segments.
   - Applies segmented sieve to each segment.

Key Points:
- Space Efficiency: Only O(√n) for base primes + O(segmentSize) for current segment.
- Time Efficiency: Still O(n log log n), but with better cache usage.
- Handles Large Ranges: Can find primes up to 10¹² or even higher.
- Flexibility: Segment size can be tuned based on cache size for better performance.

The segmented sieve is a masterclass in algorithm design through first principles thinking:
1. Understand the core issue (memory constraint).
2. Break down the problem (work in segments).
3. Reuse core insights (√n, marking multiples).
4. Consider system-level details (cache efficiency).

This approach turns an infeasible problem (terabytes of RAM needed) into a solvable one, showcasing how deeply understanding a problem's fundamentals can lead to innovative and highly efficient solutions.

*/