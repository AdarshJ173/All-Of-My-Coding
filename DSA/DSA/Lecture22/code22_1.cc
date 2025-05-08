#include<iostream>
using namespace std;


//* To Lower case
// Returns the lowercase of the character
char toLowerCase(char ch){
    // If ch is an uppercase letter, return the lowercase version
    // The if statement checks if the character is in the range of 'A' to 'Z' (inclusive)
    // If it is, then the character is subtracted by the difference between 'A' and 'a' to get the lowercase version
    if (ch>='A' && ch<= 'Z')
    {
        return ch - 'A' + 'a';
    }
    // If ch is not an uppercase letter, return it without change
    else{
        return ch;
    }
}

//* Check Palindrome
/// This function takes a char array 'a' and the size of the array 'n' as an argument, and returns true if the string represented by the array is a palindrome and false otherwise.
/// A palindrome is defined as a string that reads the same forwards and backwards.
/// The function works by comparing the characters at the start and end of the string, and working its way inwards towards the middle.
/// The loop starts at index 0 and continues until the start index is greater than the end index.
/// The toLowerCase function is used to compare the characters, so that the function is case-insensitive.
/// The swap function is used to swap two characters, and the loop works by incrementing the start index and decrementing the end index.
bool CheckPalindrome(char a[],int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

//* Reverse a string
/// This function takes a char array as an argument and reverses the string represented by the array.
/// The function works by swapping characters at the start and end of the string, and working its way inwards towards the middle.
/// The loop starts at index 0 and continues until the start index is greater than the end index.
/// The swap function is used to swap two characters, and the loop works by incrementing the start index and decrementing the end index.
void reverse(char name[], int n){
    int s= 0;
    int e = n-1;

    while (s<e)
    {
        // swap the characters at the start and end of the string
        swap(name[s++],name[e--]);
    }
    
}


//* LENGTH OF STRING
/// This function takes a char array as an argument and returns the length of the string represented by the array.
/// The length of the string is determined by counting the number of characters until the null character '\0' is encountered.
/// The loop starts at index 0 and continues until the null character is encountered.
int getLength(char name[]){
    int count = 0;
    for (int i = 0;name[i] != '\0'; i++)
    {
        // Increment the count for every character until the null character is encountered
        count++;
    }
    // Return the count which represents the length of the string
    return count;
}

char getMaxOccChar(string s){
    // Create an array of size 26 to count the occurrence of each character in the string
    int arr[26] = {0};

    // Loop through the string
    for (int i = 0; i <s.length(); i++)
    {
        // Get the character at index i
        char ch  = s[i];
        // Get the number of the character in the array
        int number = 0;

        // If the character is a lowercase letter
        if (ch>='a' && ch<='z')
        {
            // Convert the character to the corresponding number in the array
            number = ch - 'a';
        }
        else{
            // Convert the character to the corresponding number in the array
            number = ch - 'A';
        }
        // Increment the count for the character in the array
        arr[number]++;
    }

    // Initialize the max count to -1, and the answer to 0
    int maxi = -1;
    int ans = 0;

    // Loop through the array
    for (int i = 0; i <26; i++)
    {
        // If the count at index i is greater than the max count
        if (maxi<arr[i])
        {
            // Update the max count and the answer
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a'+ans;
    // Return the character
    return finalAns;

    // or just
    // return 'a'+ans;
    
}

int main(){
    // char name[20];

    // cout<<"Enter your name: ";
    // cin>>name;

    // // The following line of code is assigning the null character '\0'
    // // to the third element of the array name.
    // // In C++,    // a null character is used to indicate the end of a string.
    // // This is necessary because the cin>> statement will only read up to the
    // // first whitespace character (space, tab, newline, enter, etc.)
    // // name[2] = '\0';

    // cout<<"Your name is: ";
    // cout<<name<<endl;

    // // The cin>> statement will stop execution when it encounters a whitespace
    // // character (space, tab, newline, enter, etc.).
    // // This means that the string that is read in will not include any of these
    // // whitespace characters.

    // int len = getLength(name);
    // cout<<"Length: "<<len<<endl;

    // reverse(name,len);
    // cout<<"The reverse of your name is: ";
    // cout<<name<<endl;

    // cout<<"Palindrome Or Not : "<<CheckPalindrome(name,len)<<endl; 

    // cout<<"Character is : "<<tolower('b')<<endl;
    // cout<<"Character is : "<<tolower('C')<<endl;

    string s;
    cin>>s;
    
    cout<<getMaxOccChar(s)<<endl;

    return 0;
}
