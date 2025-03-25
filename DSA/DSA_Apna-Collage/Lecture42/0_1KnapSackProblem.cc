#include<iostream>
using namespace std;

// Function to calculate the maximum value that can be put in a knapsack of capacity W
int calculateMaxKnapsackValue(int value[], int wt[], int n, int W){
    // Base case: If there are no items or the knapsack capacity is 0, return 0
    if (n == 0 || W == 0) {
        return 0;
    }

    // If the weight of the nth item is more than the knapsack capacity, skip it
    if (wt[n-1] > W) {
        return calculateMaxKnapsackValue(value, wt, n-1, W);
    }
    
    // Recursive case: Choose the maximum value between including the nth item and excluding it
    return max(calculateMaxKnapsackValue(value, wt, n-1, W-wt[n-1]) + value[n-1], 
               calculateMaxKnapsackValue(value, wt, n-1, W));
}

int main(){
    // Example items with their weights and values
    int wt[] = {10, 20, 30}; // Weights of items
    int value[] = {100, 50, 150}; // Values of items
    int W = 50; // Capacity of the knapsack

    // Print the maximum value that can be put in the knapsack
    cout << "Maximum value in knapsack: " << calculateMaxKnapsackValue(value, wt, 3, W) << endl;

    return 0;
}