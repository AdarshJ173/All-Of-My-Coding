#include<iostream>
using namespace std;

// Function to recursively move disks from source to destination using a helper rod
void moveDisks(int totalDisks, char sourcePeg, char destinationPeg, char auxiliaryPeg){
    // Base case: If there are no disks to move, do nothing
    if (totalDisks == 0)
    {
        return;
    }
    
    // Move totalDisks - 1 disks from sourcePeg to auxiliaryPeg, so they are out of the way
    moveDisks(totalDisks-1, sourcePeg, auxiliaryPeg, destinationPeg);
    // Move the nth disk from sourcePeg to destinationPeg
    cout<<"Move from "<<sourcePeg<<" to "<<destinationPeg<<endl;
    // Move the totalDisks - 1 disks that we left on auxiliaryPeg to destinationPeg
    moveDisks(totalDisks-1, auxiliaryPeg, destinationPeg, sourcePeg);
}

int main(){
    // Call the function to move 3 disks from 'A' to 'C' using 'B' as auxiliary
    moveDisks(3,'A','C','B');
}