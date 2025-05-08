// https://www.naukri.com/code360/problems/modular-exponentiation_1082146?leftPanelTabValue=SUBMISSION

/**
Certainly! Let's dive into Fast Exponentiation, also known as Exponentiation by Squaring or Binary Exponentiation, using a first principles thinking approach.
 * Fast Exponentiation: Powering Up Quickly
 * 
 * First Principles:
 * 1. What is Exponentiation?
 *    - a⁵ means a * a * a * a * a (5 times)
 *    - In general, a^n = a * a * ... * a (n times)
 *    - It's repeated multiplication, just as multiplication is repeated addition
 * 
 * 2. The Naive Approach:
 *    - To compute 3⁷: 3 * 3 * 3 * 3 * 3 * 3 * 3
 *    - That's 6 multiplications. For 3¹⁰⁰? 99 multiplications!
 *    - Time complexity: O(n). Too slow for large exponents.
 * 
 * 3. Human Insight: Regrouping
 *    - Consider 3⁷:
 *      = 3 * 3 * 3 * 3 * 3 * 3 * 3
 *      = (3 * 3) * (3 * 3) * (3 * 3) * 3
 *      = 9 * 9 * 9 * 3
 *      = (9 * 9) * 3 * 3
 *      = 81 * 9
 *    - We did 3 multiplications, not 6! How?
 *      i.   3² = 3 * 3            (1 mult)
 *      ii.  3⁴ = 3² * 3²         (1 mult, reusing i)
 *      iii. 3⁶ = 3⁴ * 3²         (1 mult, reusing i & ii)
 *      iv.  3⁷ = 3⁶ * 3¹         (1 mult, using iii)
 * 
 * 4. Key Insight: Binary Representation
 *    - Every number can be written in binary (powers of 2).
 *    - 7 in binary is 111 (4 + 2 + 1 or 2³ + 2² + 2¹).
 *    - So, 3⁷ = 3^(2³ + 2² + 2¹)
 *         = 3^(2³) * 3^(2²) * 3^(2¹)
 *         = (((3²)²)²) * ((3²)²) * (3²)
 *    - We only compute 3², 3⁴, and reuse them!
 * 
 * 5. The Algorithm:
 *    a. Initialize result as 1 (anything to the power of 0 is 1).
 *    b. Initialize base as the number being exponentiated (e.g., 3 in 3⁷).
 *    c. While exponent > 0:
 *       i.   If exponent is odd, multiply result by base.
 *       ii.  Square the base (base * base).
 *       iii. Halve the exponent (right-shift in binary).
 * 
 * 6. Why Does This Work?
 *    - Every time we halve the exponent, we square the base.
 *    - This maintains a^n = result * base, where n is the remaining exponent.
 *    - When a bit is 1 in binary, we include that power of 2 by multiplying.
 * 
 * 7. Time Complexity:
 *    - We perform at most 2 * log₂(n) multiplications.
 *    - Why? Each bit in n's binary representation causes at most 2 mults.
 *    - So, it's O(log n), exponentially faster than O(n)!
 * 
 * 8. Applications:
 *    a. Large Exponents: Crypto (RSA), where n can be 1000+ digits.
 *    b. Modular Exponentiation: (a^b) % m, crucial in cryptography.
 *    c. Matrix Exponentiation: Solve dynamic programming problems.
 *    d. Any problem needing big powers.
 *
 * In Code: Let's solve your exponentiation problem and extend it to modular exponentiation for cryptography.
 */

#include <iostream>
using namespace std;

// Fast Exponentiation: Compute a^n
long long fastPow(long long a, int n) {
    long long result = 1;
    while (n > 0) {
        if (n & 1) {  // If n is odd (last bit is 1)
            result *= a;
        }
        a *= a;  // Square the base
        n >>= 1;  // Halve the exponent (right shift)
    }
    return result;
}

// Modular Fast Exponentiation: Compute (a^n) % m
long long modPow(long long a, int n, int m) {
    long long result = 1;
    a %= m;  // Ensure a is within modular space
    while (n > 0) {
        if (n & 1) {
            result = (result * a) % m;
        }
        a = (a * a) % m;  // Square the base in modular space
        n >>= 1;
    }
    return result;
}

int main() {
    // 1. Basic Fast Exponentiation
    int base = 3, exponent = 7;
    cout << base << "^" << exponent << " = " << fastPow(base, exponent) << "\n";
    
    // 2. Large Numbers
    base = 2, exponent = 63;  // Max power of 2 for long long
    cout << base << "^" << exponent << " = " << fastPow(base, exponent) << "\n";
    
    // 3. Cryptography: RSA-like operation
    long long message = 42;
    int publicKey = 65537;  // Common RSA public exponent
    int modulus = 999999937;  // A large prime for this example
    long long encrypted = modPow(message, publicKey, modulus);
    cout << "Original: " << message << ", Encrypted: " << encrypted << "\n";
    
    return 0;
}
/*

Let's walk through each part:

1. `fastPow` Function:
   - Computes a^n using the fast exponentiation technique.
   - Initializes `result` as 1 (anything to the power of 0 is 1).
   - While `n > 0`:
     - If `n` is odd (last bit is 1), multiply `result` by `a`.
     - Square `a` (for the next power of 2).
     - Halve `n` (move to next bit).

2. `modPow` Function:
   - Same as `fastPow`, but operations are in modular space.
   - `(a * b) % m = ((a % m) * (b % m)) % m` - key property of modular arithmetic.
   - We keep `result` and `a` within modular space at each step.

3. In `main()`:
   a. Basic Example:
      - Compute 3⁷ = 2187 efficiently.

   b. Large Numbers:
      - 2⁶³ is the largest power of 2 that fits in a `long long`.
      - Fast exponentiation handles it easily.
      - Try this with a loop (2 * 2 * 2 * ...) - it would be much slower!
   
   c. Cryptography (RSA-like):
      - In RSA, you encrypt `m` as `c = m^e % n`, where:
        - `m` is the message (42 here)
        - `e` is the public exponent (65537, a common choice)
        - `n` is the modulus (product of two large primes)
      - Without fast modular exponentiation, this would be infeasible!

Why is Fast Exponentiation a Big Deal?
1. Speed: O(log n) is exponentially faster than O(n).
2. Large Numbers: Essential for fields like cryptography.
3. Modular Version: Keeps numbers manageable in finite fields.
4. Beautiful Insight: Reconceptualizes exponents as binary expansion.

The algorithm showcases several first principles:
1. Understanding Core Concepts: What exponentiation really means.
2. Seeking Patterns: Binary representation, reusable computations.
3. Applying Number Theory: Properties of exponents, modular arithmetic.
4. Efficiency Mindset: Avoiding repeated work.

Fast Exponentiation is a shining example of how deeply understanding a problem's structure (exponents as binary) and leveraging mathematical properties (modular arithmetic) can transform a seemingly complex task into an elegantly simple and blazingly fast solution. It's not just an algorithm; it's a lesson in seeing problems from their most fundamental perspective.
*/