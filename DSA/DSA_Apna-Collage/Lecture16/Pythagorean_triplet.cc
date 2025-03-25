#include<iostream>
using namespace std;

// This function checks if three given numbers form a Pythagorean triplet
bool check(int x, int y, int z){
    // Find the largest number among x, y, and z
    int a = max(x,max(y,z));
    int b,c;

    // Assign the other two numbers to b and c
    if (a ==x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    
    // Check if a^2 = b^2 + c^2 (Pythagorean theorem)
    if (a*a == b*b + c*c)
    {
        return true;  // It is a Pythagorean triplet
    }
    else{
        return false;  // It is not a Pythagorean triplet
    }
}

int main(){
    int x, y,z;
    
    // Input three numbers from the user
    cin>>x>>y>>z;

    // Check if the input numbers form a Pythagorean triplet
    if (check(x,y,z))
    {
        cout<<"Pythogorean triplet"<<endl;
    }
    else{
        cout<<"not a pythagorean triplet"<<endl;
    }
}

// Explanation:

// 1. The program starts by including the iostream library and using the standard namespace.

// 2. The 'check' function takes three integers (x, y, z) as input and returns a boolean value.
//    - It first determines the largest number among the three and assigns it to 'a'.
//    - The other two numbers are assigned to 'b' and 'c'.
//    - It then checks if a^2 = b^2 + c^2, which is the Pythagorean theorem.
//    - If the equation holds true, it returns true, otherwise false.

// 3. In the main function:
//    - Three integers (x, y, z) are input from the user.
//    - The 'check' function is called with these inputs.
//    - Based on the return value of 'check', it prints whether the numbers form a Pythagorean triplet or not.

// 4. A Pythagorean triplet is a set of three positive integers a, b, and c that satisfy the equation a^2 + b^2 = c^2.
//    This program checks if the given three numbers satisfy this condition, with the largest number being considered as 'c'.

// 5. The program uses basic arithmetic operations and conditional statements to perform this check efficiently.