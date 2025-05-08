#include<iostream> // Include the standard input/output stream library
using namespace std; // Use the standard namespace to avoid prefixing std::

// Function to print numbers from 1 to n in ascending order using recursion
void print(int n){
    // base case: if n is 0, stop the recursion
    if (n == 0)
    {
        return ;
    }
    
    // Recursive call to print numbers from 1 to n-1
    print(n-1); 

    // After the recursive call, print the current number n
    cout<<n<<endl; // This line executes after the recursive call, hence it prints in ascending order
}

// Main function of the program
int main(){

    int n; // Variable to store the number up to which we want to print
    cout<<"enter n: "; // Prompt the user to enter a number
    cin>>n; // Read the number from user input
    cout<<endl; // Print a newline for better formatting

    print(n); // Call the print function to print numbers from 1 to n

    return 0; // Return 0 to indicate successful execution
}