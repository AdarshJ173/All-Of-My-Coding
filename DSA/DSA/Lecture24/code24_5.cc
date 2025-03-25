///Modular Arithmetic 


/**
Certainly! Let's dive into Modular Arithmetic, a beautiful and profoundly useful concept in mathematics and computer science.
 * Modular Arithmetic - Math on a Clock Face
 * 
 * First Principles:
 * 1. What is a Modulus?
 *    - In math, "modulo n" means "on a circle of n points".
 *    - Example: Clock has 12 hours. After 12, it's back to 1, 2, 3...
 *    - We say "1 hour after 12" is "1 modulo 12" or "1 (mod 12)".
 * 
 * 2. Why a Clock?
 *    - Clocks "wrap around" after 12. This is the key idea!
 *    - 13:00 is the same as 1:00 pm. We say 13 ≡ 1 (mod 12).
 *    - 25:00 is 1:00 pm too! 25 ≡ 1 (mod 12) as well.
 * 
 * 3. Beyond Clocks - Any Modulus Works!
 *    - Not just 12; any positive number can be a modulus.
 *    - "mod 7" is like a week: Sunday (0), Monday (1), ..., Saturday (6), Sunday (0) again.
 *    - In computing: "mod 256" for colors (0-255), "mod 26" for caesar ciphers (A-Z).
 * 
 * 4. Core Operations:
 *    a. Modulo: a % n = remainder when a is divided by n
 *       - 17 % 5 = 2 (17 ÷ 5 is 3 remainder 2)
 *       - On a 5-hour clock: 17:00 is same as 2:00
 *    
 *    b. Addition: (a + b) % n = ((a % n) + (b % n)) % n
 *       - 10 + 7 on 12-hour clock: (10 % 12 + 7 % 12) % 12
 *                               = (10 + 7) % 12 = 5
 *       - 10:00 + 7 hours = 5:00
 *    
 *    c. Subtraction: (a - b) % n = ((a % n) - (b % n) + n) % n
 *       - 3 - 5 on 7-day week: (3 % 7 - 5 % 7 + 7) % 7
 *                          = (3 - 5 + 7) % 7 = 5
 *       - 3 days from Sunday, go back 5: lands on Friday (5)
 *    
 *    d. Multiplication: (a * b) % n = ((a % n) * (b % n)) % n
 *       - 10 * 3 on 12-hour clock: (10 % 12 * 3 % 12) % 12
 *                              = (10 * 3) % 12 = 6
 *       - 10:00, triple it: 6:00
 * 
 * 5. Why Care?
 *    a. Stays in Range: Results always between 0 and n-1. Great for arrays, color values, etc.
 *    b. Same Remainder, Same Behavior: 13 and 1 act the same on a 12-hour clock.
 *    c. Enables Cycles: Hours, days, alphabet wraparound in ciphers.
 *    d. Core in Cryptography: RSA, Diffie-Hellman use modular exponentiation.
 * 
 * In Code:
 * - C++'s % is actually "remainder", not true modulo for negatives.
 * - But for this problem and most coding, it works just fine!
 */

#include <iostream>
#include <vector>
using namespace std;

// Is this time in the afternoon (PM)?
bool isPM(int hour) {
    return hour % 12 >= 6;  // 6:00 to 11:59 on 12-hour clock
}

// Convert 24-hour time to 12-hour format
int to12HourFormat(int hour) {
    int result = hour % 12;
    return result == 0 ? 12 : result;  // 0:00 or 12:00 should show as 12
}

// What day is it, n days from Sunday?
string dayOfWeek(int n) {
    string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return days[n % 7];
}

// Caesar cipher: shift each letter by k positions
string caesarCipher(string text, int k) {
    for (char& c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + k) % 26 + base;
        }
    }
    return text;
}

int main() {
    // 1. Time Addition
    int current = 10, toAdd = 5;  // It's 10:00, add 5 hours
    int newHour = (current + toAdd) % 12;
    cout << "Time: " << current << ":00 + " << toAdd << " hours = "
         << (newHour == 0 ? 12 : newHour) << ":00\n";
    
    // 2. AM or PM?
    int hour24 = 14;  // 14:00 in 24-hour format
    cout << hour24 << ":00 is " << to12HourFormat(hour24) << ":00 "
         << (isPM(hour24) ? "PM\n" : "AM\n");
         
    // 3. Days of the Week
    int daysFromSun = 10;  // 10 days from Sunday
    cout << daysFromSun << " days from Sunday is " << dayOfWeek(daysFromSun) << "\n";
    
    // 4. Caesar Cipher
    string message = "ATTACK AT DAWN";
    int shift = 3;  // Caesar's original shift
    cout << "Original: " << message << "\n"
         << "Encrypted: " << caesarCipher(message, shift) << "\n";
    
    return 0;
}

/*

Let's walk through each part:

1. Time Addition (Modular Addition)
   - Current time: 10:00, want to add 5 hours.
   - In 12-hour clock: (10 + 5) % 12 = 15 % 12 = 3
   - So, 5 hours after 10:00 is 3:00.
   - Note: We handle 0 as 12 (midnight or noon) for readability.

2. AM or PM? (Modular Ranges)
   - In 24-hour format, 14:00 is 2:00 PM.
   - On 12-hour clock: 14 % 12 = 2.
   - But is it AM or PM? 14 % 12 = 2, which is in the PM range (6 to 11 on 12-hour clock).

3. Days of the Week (Modular Cycling)
   - Days form a cycle: 0=Sun, 1=Mon, ..., 6=Sat, 7=Sun again.
   - So, day of week is just "number of days" modulo 7.
   - 10 days from Sunday: 10 % 7 = 3, which is Wednesday.

4. Caesar Cipher (Modular Alphabet)
   - In Caesar's cipher, you shift each letter by a fixed amount.
   - Alphabet is cyclic: A-Z (0-25), then wraps around.
   - To shift 'A' by 3: ('A' - 'A' + 3) % 26 + 'A' = 3 + 'A' = 'D'.
   - 'X' by 3: ('X' - 'A' + 3) % 26 + 'A' = 23 + 3 = 26 % 26 + 'A' = 'A'.

Key Takeaways:
1. Modular arithmetic is about "wrapping around" at a certain value.
2. It's incredibly intuitive: just think of clock faces or week cycles.
3. It keeps values in a fixed range (0 to n-1), perfect for arrays, colors, etc.
4. Basic operations (add, subtract, multiply) all work with simple adjustments.
5. It's foundational in CS: time, looping indices, hash tables, cryptography.

The beauty of modular arithmetic is how it captures cycles and ranges so naturally. Once you see the world through "modular lenses"—clocks, calendars, color wheels—its power and elegance become clear. In coding, it lets you work with ranges and cycles without ever going out of bounds, making it a fundamental tool in a programmer's toolkit.

*/