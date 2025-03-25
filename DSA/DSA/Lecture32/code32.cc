/// RECURSION

#include<iostream>
using namespace std;

// Function to simulate reaching home from a source to a destination
void reachHome(int src, int dest){

    // Print the current source and destination
    cout<<"source "<<src<<" destination "<<dest<<endl;

    // Base case: if the source is equal to the destination, print "Reached Home" and return
    if(src == dest){
        cout<<"Reached Home"<<endl;
        return;
    }

    // Processing: increment the source by 1
    src++;
    
    // Recursive call: call the function again with the updated source
    reachHome(src,dest);
}

int main(){
    int dest = 10; // Destination is set to 10
    int src = 1;   // Source is set to 1

    // Call the reachHome function with the initial source and destination
    reachHome(src,dest);

    return 0; // Return 0 to indicate successful execution
}
