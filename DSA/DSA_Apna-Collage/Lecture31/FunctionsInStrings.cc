#include<bits/stdc++.h>
using namespace std;

// Main function to execute the program
int main(){

    // Declaring a string variable to store and manipulate strings
    string str;

    // Initializing two string variables with specific values
    string s1 = "fam";
    string s2 = "ily";

    // Concatenating s1 and s2 using the '+' operator and displaying the result
    cout<<s1+s2<<endl;

    // Concatenating s1 and s2 using the '+' operator and storing the result in s3
    string s3 = s1+s2;
    cout<<s3<<endl;

    // Appending s2 to s1 using the 'append' method
    s1.append(s2);
    cout<<s1<<endl;

    // Accessing and displaying individual characters of s1 using indexing
    cout<<s1[0]<<endl;
    cout<<s1[1]<<endl;
    cout<<s1[2]<<endl;

    // Initializing a string variable with a specific value
    string abc = "ioboiighwojhe  oihewg sih";
    cout<<abc<<endl;

    // Clearing the contents of the string abc
    abc.clear();
    cout<<abc<<endl;

    // Initializing three string variables for comparison
    string st1 = "abc";
    string st2 = "xya";
    string st3 = "abc";

    // Comparing strings using the 'compare' method and displaying the results
    cout<<s2.compare(s1)<<endl;
    cout<<s1.compare(s2)<<endl;
    cout<<s1.compare(s3)<<endl;

    // Checking if s1 and s3 are equal using the 'compare' method
    if(!s1.compare(s3)){
        cout<<"strings are equal"<<endl;
    }

    // Initializing a string variable with a specific value
    string name = "Naira";
    cout<<name<<endl;

    // Clearing the contents of the string name
    name.clear();

    // Checking if the string name is empty using the 'empty' method
    if(name.empty()){
        cout<<"string is empty"<<endl;
    }

    // Initializing a string variable with a specific value
    string n = "nincompoop";
    // Erasing a portion of the string n starting from the 3rd position for a length of 3 characters
    n.erase(3,3);
    cout<<n<<endl;
    // Erasing a portion of the string n starting from the 3rd position for a length of 2 characters
    n.erase(3,2);
    cout<<n<<endl;

    // Initializing a string variable with a specific value
    string maze = "This is a maze";
    // Finding the position of specific substrings within the string maze
    cout<<maze.find("is")<<endl;
    cout<<maze.find("a")<<endl;
    cout<<maze.find("maze")<<endl;

    // Initializing a string variable with a specific value
    string AAJ = "Adarsh soul";
    // Inserting a substring into the string AAJ at a specific position
    AAJ.insert(6, " is a Peaceful");
    cout<<AAJ<<endl;

    // Displaying the size and length of the string AAJ
    cout<<AAJ.size()<<endl;
    cout<<AAJ.length()<<endl;

    // Iterating through the characters of the string AAJ and displaying each character
    for (int i = 0; i < AAJ.length(); i++)
    {
        cout<<AAJ<<" ";
    }
    
    cout<<endl;

    // Initializing a string variable with a specific value
    string adarsh = "AAJ";

    // Iterating through the characters of the string adarsh and displaying each character
    for (int i = 0; i < adarsh.length(); i++)
    {
        cout<<adarsh[i]<<" ";
    }

    cout<<endl;

    // Initializing a string variable with a specific value
    string title  = "Zendriya";

    // Extracting a substring from the string title starting from the 0th position for a length of 3 characters
    string t = title.substr(0,3);
    cout<<t<<endl;
    
    // Initializing a string variable with a numeric value
    string numstr = "687987";
    // Displaying the type of the string numstr
    cout << "Type of numstr: " << typeid(numstr).name() << endl;
    
    // Converting the string numstr to an integer using the 'stoi' function
    int x = stoi(numstr);
    cout<<x<<endl;
    cout<<x+3<<endl;

    // Initializing an integer variable with a specific value
    int zzz = 3453;
    // Converting the integer zzz to a string using the 'to_string' function
    cout<<to_string(zzz)<<endl;
    // Concatenating the string representation of zzz with a character '2' and displaying the result
    cout<<to_string(zzz)+'2'<<endl;

    // Initializing a string variable with a specific value
    string bla = "oihargpharggoi";
    // Sorting the characters of the string bla in ascending order
    sort(bla.begin(),bla.end());
    cout<<bla<<endl;

return 0;
}