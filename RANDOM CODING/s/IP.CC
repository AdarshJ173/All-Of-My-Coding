#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 1. Hello World
void helloWorld() {
    cout << "Hello, World!" << endl;
}

// 2. Sum of Two Numbers
int sumOfTwoNumbers(int a, int b) {
    return a + b;
}

// 3. Factorial of a Number
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// 4. Check Even or Odd
bool isEven(int num) {
    return num % 2 == 0;
}

// 5. Reverse a String
string reverseString(const string& str) {
    return string(str.rbegin(), str.rend());
}

// 6. Fibonacci Series
vector<int> fibonacciSeries(int n) {
    vector<int> fib = {0, 1};
    for (int i = 2; i < n; ++i) {
        fib.push_back(fib[i-1] + fib[i-2]);
    }
    return fib;
}

// 7. Check Prime Number
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// 8. Find Maximum Element
int findMaxElement(const vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

// 9. Palindrome Check
bool isPalindrome(const string& str) {
    return str == string(str.rbegin(), str.rend());
}

// 10. Simple Calculator
double calculate(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : throw runtime_error("Division by zero");
        default: throw runtime_error("Invalid operator");
    }
}

// 11. Find Minimum Element
int findMinElement(const vector<int>& arr) {
    return *min_element(arr.begin(), arr.end());
}

int main() {
    // Test each function
    helloWorld();

    cout << "Sum of 5 and 3: " << sumOfTwoNumbers(5, 3) << endl;

    cout << "Factorial of 5: " << factorial(5) << endl;

    cout << "Is 7 even? " << (isEven(7) ? "Yes" : "No") << endl;

    cout << "Reverse of 'Hello': " << reverseString("Hello") << endl;

    cout << "Fibonacci series (first 5 numbers): ";
    for (int num : fibonacciSeries(5)) cout << num << " ";
    cout << endl;

    cout << "Is 17 prime? " << (isPrime(17) ? "Yes" : "No") << endl;

    vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    cout << "Max element: " << findMaxElement(numbers) << endl;

    cout << "Is 'racecar' a palindrome? " << (isPalindrome("racecar") ? "Yes" : "No") << endl;

    cout << "5 + 3 = " << calculate(5, 3, '+') << endl;

    cout << "Min element: " << findMinElement(numbers) << endl;

    return 0;
}