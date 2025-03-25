/// Operator Precedence 

// op = 2*3/4+5
// ((2*3)/4)+5




#include<iostream>
using namespace std;

//! QUESTION-1
int calculateDifference(int num){
    int prdct = 1;
    int sum = 0;

    while (num!=0){
        int digit = num%10;
        prdct = prdct*digit;
        sum = sum+digit;
        num = num/10;
    }

    int ans = prdct - sum;
    return ans;
}

int main(){
    int num;
    cin>>num;

    int result = calculateDifference(num);

    cout << "The difference between the product of the digits and the sum of the digits is: " << result << endl;

    return 0;


}
    
/*
The calculateDifference function takes an integer num as input.
It initializes two variables prdct and sum to 1 and 0, respectively.
It enters a while loop that continues until num becomes 0.
In each iteration of the loop, it extracts the last digit of num using the modulus operator %, stores it in digit, and multiplies prdct by digit. It also adds digit to sum.
It then divides num by 10 to remove the last digit.
After the loop ends, it calculates the difference between prdct and sum and stores it in ans.
The function returns ans.
In the main function:

It declares an integer num and reads a value from the user using cin.
It calls the calculateDifference function with num as an argument and stores the result in result.
It prints the result to the console.
*/