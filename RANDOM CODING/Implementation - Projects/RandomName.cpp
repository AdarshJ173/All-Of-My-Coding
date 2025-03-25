#include<bits/stdc++.h>

using namespace std;

int main() {
    // Define the list of names
    vector<string> names = {"Adarsh STP", "Aaryan", "AAJ", "Subham", "Sudhansu"};

    // Define the random number generator
    mt19937 generator;
    generator.seed(time(0));

    // Define the distribution
    uniform_int_distribution<int> distribution(0, names.size() - 1);

    // Pick a random name from the list
    string random_name = names[distribution(generator)];

    // Print the random name
    cout << "Random name: " << random_name << endl;

    return 0;
}