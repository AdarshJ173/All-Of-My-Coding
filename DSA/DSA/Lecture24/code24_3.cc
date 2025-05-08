/**
Here's a detailed explanation of GCD (Greatest Common Divisor) or HCF (Highest Common Factor) from a first principles thinking approach, along with C++ code examples:
 ** GCD (Greatest Common Divisor) or HCF (Highest Common Factor)
 * 
 * First Principles Thinking:
 * 1. What is a Divisor?
 *    - A number that divides another number without leaving a remainder.
 *    - Example: 2 and 3 are divisors of 6 (6 ÷ 2 = 3, 6 ÷ 3 = 2).
 * 
 * 2. What is a Common Divisor?
 *    - A number that divides two or more numbers without remainders.
 *    - Example: 2 is a common divisor of 6 and 10 (6 ÷ 2 = 3, 10 ÷ 2 = 5).
 * 
 * 3. What is the Greatest Common Divisor (GCD)?
 *    - The largest number that divides two or more numbers without remainders.
 *    - Example: GCD of 48 and 18 is 6 (48 = 6 * 8, 18 = 6 * 3).
 * 
 * 4. Why is GCD Important?
 *    a. Fraction Simplification: 48/18 = (6*8)/(6*3) = 8/3 (simplified).
 *    b. Least Common Multiple (LCM): LCM(a, b) = (a * b) / GCD(a, b).
 *    c. Solving Diophantine Equations: ax + by = c, solvable if c is a multiple of GCD(a, b).
 * 
 * 5. How to Find GCD?
 *    a. Naive Approach:
 *       i.   List all divisors of each number.
 *       ii.  Find common divisors.
 *       iii. Choose the greatest one.
 *       - Example: Divisors of 48: 1, 2, 3, 4, 6, 8, 12, 16, 24, 48
 *                 Divisors of 18: 1, 2, 3, 6, 9, 18
 *                 Common: 1, 2, 3, 6 → GCD is 6
 *       - Issue: Very slow for large numbers!
 * 
 *    b. Prime Factorization:
 *       i.   Break each number into prime factors.
 *       ii.  Identify common factors.
 *       iii. Multiply common factors.
 *       - Example: 48 = 2⁴ * 3, 18 = 2 * 3²
 *                 Common: 2¹ * 3¹ = 6
 *       - Better, but factorizing is still tough for large numbers.
 * 
 *    c. Euclidean Algorithm (Eureka Moment!):
 *       - Insight: GCD doesn't change if we replace larger number with its remainder when divided by smaller.
 *       - Why? Any common divisor of a and b is also a divisor of a - b.
 *         - If d divides a and b, then a = d*x, b = d*y
 *         - a - b = d*x - d*y = d*(x - y)
 *         - So d also divides a - b, and by extension, a % b (since a % b = a - b * ⌊a/b⌋)
 *       - Example: GCD(48, 18)
 *         - 48 = 18 * 2 + 12   →   GCD(48, 18) = GCD(18, 12)
 *         - 18 = 12 * 1 + 6    →   GCD(18, 12) = GCD(12, 6)
 *         - 12 = 6 * 2 + 0     →   GCD(12, 6) = 6
 *       - The process naturally terminates when remainder is 0.
 *       - Last non-zero remainder is the GCD!
 * 
 * The Euclidean algorithm is a beautiful example of first principles thinking:
 * - Recognizing the fundamental property (common divisors divide differences)
 * - Applying this recursively to simplify the problem
 * - Reaching an elegant, efficient solution
 */


/**
Certainly! Let's focus on the Euclidean algorithm to find the Greatest Common Divisor (GCD) of two numbers. This is one of the oldest and most efficient algorithms in mathematics, and it's surprisingly simple to understand and implement.
 * GCD (Greatest Common Divisor) - Simple Explanation
 * 
 * What is GCD?
 * - It's the largest number that divides both of your numbers without a remainder.
 * - For example, GCD of 12 and 18 is 6 because:
 *   - 12 = 6 * 2
 *   - 18 = 6 * 3
 *   - No number larger than 6 divides both 12 and 18.
 * 
 * How to Find GCD - The Euclidean Way:
 * 1. Take two numbers, let's say 48 and 18.
 * 2. Divide the larger by the smaller:
 *    48 ÷ 18 = 2 remainder 12  (48 = 18 * 2 + 12)
 * 3. Now, forget 48. Our new pair is 18 and 12 (the divisor and remainder).
 * 4. Keep doing this:
 *    18 ÷ 12 = 1 remainder 6   (18 = 12 * 1 + 6)
 *    12 ÷ 6  = 2 remainder 0   (12 = 6 * 2 + 0)
 * 5. Stop when the remainder is 0.
 * 6. The last non-zero remainder is the GCD (in this case, 6).
 * 
 * Why Does This Work?
 * - Any number that divides both 48 and 18 also divides their difference:
 *   48 - 18 = 30, so it also divides 30.
 * - But 48 - 18 is just 48 - (18 * 2), which is the same as the remainder 12!
 * - So, any common divisor of 48 and 18 is also a divisor of 12.
 * - We can keep going: any divisor of 18 and 12 also divides 6.
 * - The biggest number that divides both is the last remainder, 6.
 * 
 * In Code:
 * - We just keep replacing the bigger number with the remainder.
 * - Stop when the remainder is 0.
 * - Super simple, super fast!
 */

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    // Make sure a is the bigger number
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    // Keep replacing (a) with (b) and (b) with the remainder
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    
    // When b becomes 0, a is the GCD
    return a;
}

int main() {
    int num1, num2;
    
    cout<< "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int result = gcd(num1, num2);
    
    cout << "The GCD of " << num1 << " and " << num2 << " is " << result << endl;
    
    return 0;
}

/*

Let's break down this simple code:

1. `gcd` Function:
   - Takes two numbers, `a` and `b`.
   - First, it makes sure `a` is the bigger number. If not, it swaps them.
   - Then, it does the Euclidean dance:
     - Replace `a` with `b`.
     - Replace `b` with `a % b` (the remainder when `a` is divided by `b`).
     - Keep doing this until `b` becomes 0.
   - When `b` is 0, `a` is the GCD. Magic!

2. `main` Function:
   - Asks the user for two numbers.
   - Calls the `gcd` function.
   - Displays the result.

Why This Code is Great:
1. Super Simple: Just a loop and a modulo operation!
2. No Big Numbers: We never compute anything larger than the inputs.
3. Fast: It's much quicker than checking every possible divisor.
4. Old But Gold: This method has been used for over 2,000 years!

Fun Facts:
- The Euclidean algorithm is one of the oldest algorithms in common use.
- It's named after Euclid, who described it in his book "Elements" around 300 BCE.
- But it might be even older, possibly known to the ancient Babylonians!

This code is a beautiful example of how a deep mathematical insight (any common divisor divides the difference) leads to an incredibly simple and efficient algorithm. It's a prime example of "easy to code, easy to understand, yet profoundly smart" - a hallmark of truly great algorithms.
*/