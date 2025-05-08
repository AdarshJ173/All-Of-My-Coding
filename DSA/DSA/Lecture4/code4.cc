/// PATTERNS

#include<iostream>
using namespace std;

int main(){
/*
to make:
1234
1234
1234
1234
*/

//! Q-1

// Prompt the user to input a number
    int n;
    cout<<"Input the Number: "; 
    cin>>n;

    // Initialize counter variable i to 1
    int i=1;

    // Outer loop to control the number of rows
    while(i<=n){
        // Initialize counter variable j to 1
        int j = 1;
        
        // Inner loop to print numbers in each row
        while (j<=n)
        {
            // Print the current number
            cout<<j;
            // Increment j by 1 for the next iteration
            j = j +1;
        }
        
        // Print a newline character to move to the next line
        cout<<endl;
        
        // Increment i by 1 for the next iteration
        i = i + 1;
    }

    cout<<endl;

/*
Here's a step-by-step breakdown:

The code first declares an integer variable n and then prompts the user to input a number, which is then stored in n.

It then initializes another integer variable i to 1.

The code then enters a while loop that runs as long as i is less than or equal to n. This is the outer loop that controls how many rows will be printed.

Inside this outer loop, another while loop is started. This inner loop runs as long as j is less than or equal to n. This loop controls how many numbers will be printed in each row.

Inside the inner loop, the current value of j is printed out. Then, j is incremented by 1, so that the next time the loop runs, it will print the next number.

Once the inner loop has finished running (i.e., once all the numbers for the current row have been printed), a newline character is printed to move to the next line.

The outer loop then increments i by 1, and the process repeats until i is no longer less than or equal to n.
*/


}









