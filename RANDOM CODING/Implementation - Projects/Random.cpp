#include<bits/stdc++.h>
using namespace std;

int main(){

    
    // Define the array
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Define the random number generator
    mt19937 generator;
    generator.seed(time(0));

    // Define the distribution
    uniform_int_distribution<int> distribution(0, numbers.size() - 1);

    // Pick a random number from the array
    int random_number = numbers[distribution(generator)];

    // Print the random number
    cout << "Random number: " << random_number << endl;

    return 0;

}