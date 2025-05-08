/// RECURSION

//! Question1 : i/p -> "abcde" , o/p -> "edcba" --- using recursion
// link : 

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

void reverse(string &str, int i, int j){

    cout<<"call received for "<<str<<endl;

    //base case
    if (i>j)
    {
        return ;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    //recursive call
    reverse(str,i,j);
    
}

int main(){

    string name = "Adarsh";

    reverse(name,0,name.length()-1);

    cout<<name<<endl;

    return 0;
}

// second pointer , i reuse n-i-1




















