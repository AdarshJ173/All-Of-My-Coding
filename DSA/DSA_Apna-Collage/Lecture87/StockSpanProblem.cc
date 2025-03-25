#include<iostream> // Include the iostream library for input/output operations
#include<vector> // Include the vector library for dynamic array operations
#include<cmath> // Include the cmath library for mathematical operations (not used in this code)
#include<algorithm> // Include the algorithm library for various algorithms (not used in this code)
#include<stack> // Include the stack library for stack operations
using namespace std; // Use the standard namespace for convenience

/*
The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backwards ) for which the price of the stocks was less than or equal to today's price.  Find the span of the stocks for all the days.
*/

// Function to calculate the stock span for a given vector of prices
vector<int> calculateStockSpan(vector<int> prices) {
    // Initialize an empty vector to store the stock span for each day
    vector<int> stockSpanValues;

    // Initialize an empty stack to store pairs of price and span values
    stack<pair<int, int>> priceSpanStack;

    // Iterate over each price in the input vector
    for (auto currentPrice : prices) {
        // Initialize the span for the current price to 1 (minimum possible value)
        int currentSpan = 1;

        // While the stack is not empty and the top price is less than or equal to the current price
        while (!priceSpanStack.empty() && priceSpanStack.top().first <= currentPrice) {
            // Add the span of the top price to the current span
            currentSpan += priceSpanStack.top().second;
            // Remove the top price from the stack
            priceSpanStack.pop();
        }

        // Push the current price and its span onto the stack
        priceSpanStack.push({currentPrice, currentSpan});

        // Add the current span to the stock span values vector
        stockSpanValues.push_back(currentSpan);
    }

    // Return the vector of stock span values
    return stockSpanValues;
}

int32_t main() {
    // Initialize a sample vector of prices
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};

    // Calculate the stock span values for the given prices
    vector<int> stockSpanValues = calculateStockSpan(prices);

    // Print the stock span values
    for (auto span : stockSpanValues) {
        cout << span << endl;
    }
    cout << endl;

    return 0;
}

/*
Complexity Analysis:

Time Complexity: O(n), where n is the number of days (i.e., the size of the input vector). This is because we iterate over each price in the input vector once, and the while loop inside the for loop runs in total O(n) time.

Space Complexity: O(n), where n is the number of days. This is because we use a stack to store pairs of price and span values, and in the worst case, the stack can grow up to the size of the input vector.
*/