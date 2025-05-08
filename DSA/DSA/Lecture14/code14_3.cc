//! FIND SQUARE ROOT with decimals WITH BINARY SEARCH
/* *
 * GIVEN A NON-NEGATIVE INTEGER X, COMPUTE AND RETURN THE SQUARE ROOT OF X.
 * SINCE THE RETURN TYPE IS AN INTEGER, THE DECIMAL DIGITS ARE TRUNCATED, AND ONLY THE INTEGER PART OF THE RESULT IS RETURNED.
 * {YOU ARE NOT ALLOWED TO USE ANY BUILT-IN EXPONENT FUNCTION OR OPERATOR, SUCH AS POW ETC...}
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
These lines include the necessary header files for input/output operations (iostream), vector data structure (vector), and mathematical functions (cmath). The using namespace std; line allows us to use standard library functions and classes without the std:: prefix.

*/

long long int SqrtInteger(int n) {
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e) {
        long long int square = mid * mid;
        if (square == n) {
            return mid;
        } else if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

/*
This function SqrtInteger implements the binary search algorithm to find the integer part of the square root of the given non-negative integer n.

int s = 0; and int e = n; initialize the search range with the starting point s as 0 and the ending point e as n.
long long int mid = s + (e - s) / 2; calculates the midpoint of the current search range.
long long int ans = -1; initializes the answer variable to -1, which will be updated with the correct integer part of the square root.
while (s <= e) { ... } is the main loop that continues until the search range becomes empty.
Inside the loop, long long int square = mid * mid; calculates the square of the current midpoint.
If square is equal to n, it means we have found the exact square root, so we return mid.
If square is less than n, it means the square root is greater than mid, so we update ans with mid and move the start of the search range to mid + 1.
If square is greater than n, it means the square root is less than mid, so we move the end of the search range to mid - 1.
Finally, we update mid to the midpoint of the new search range.
After the loop terminates, we return the value stored in ans, which is the integer part of the square root.
*/

double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++) {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor) {
            ans = j;
        }
    }
    return ans;
}

/*
This function morePrecision takes the integer part of the square root obtained from SqrtInteger and tries to find additional decimal places up to the specified precision.

double factor = 1; initializes the factor variable to 1, which will be used to adjust the decimal places.
double ans = tempSol; initializes the ans variable with the integer part of the square root (tempSol).
for (int i = 0; i < precision; i++) { ... } is a loop that runs for the specified precision number of times.
Inside the loop, factor /= 10; updates the factor by dividing it by 10, effectively moving the decimal point one place to the left.
for (double j = ans; j * j < n; j += factor) { ans = j; } is an inner loop that starts from the current ans value and increments it by factor until the square of j becomes greater than or equal to n. At each iteration, ans is updated to the current j value.
After the outer loop finishes, the ans variable holds the square root with the desired precision, so it is returned.
*/

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int tempSol = SqrtInteger(n);
    cout << "Answer is : " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}

/*
This is the main function, which is the entry point of the program.

int n; declares a variable n to store the input value.
cout << "Enter n: "; cin >> n; prompts the user to enter a value for n and reads it from the console.
int tempSol = SqrtInteger(n); calls the SqrtInteger function with the input n and stores the result (integer part of the square root) in tempSol.
cout << "Answer is : " << morePrecision(n, 3, tempSol) << endl; calls the morePrecision function with n, a precision of 3, and tempSol as arguments. The result is printed to the console along with the "Answer is : " label.
return 0; terminates the program with a successful exit status.

The overall flow of the program is as follows:

The user is prompted to enter a non-negative integer n.
The SqrtInteger function is called with n to find the integer part of the square root using binary search.
The morePrecision function is called with n, a precision of 3, and the integer part obtained from SqrtInteger. This function adds additional decimal places to the square root result.
The final square root with three decimal places is printed to the console.

This implementation follows the given constraints of not using any built-in exponent function or operator and uses the binary search algorithm to find the square root efficiently.
*/