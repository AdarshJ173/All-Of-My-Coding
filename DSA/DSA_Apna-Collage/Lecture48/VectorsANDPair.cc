#include<bits/stdc++.h>
using namespace std;
                   
int main(){

    // Initialize an empty vector to store integers
    vector<int> v;

    // Push back elements into the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Iterate through the vector using index and print elements
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    
    // Declare an iterator for the vector
    vector<int>::iterator it;

    // Iterate through the vector using iterator and print elements
    for (it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<endl;

    // Iterate through the vector using range-based for loop and print elements
    for (auto element:v)
    {
        cout<<element<<" ";
    }
    
    cout<<endl;

    // Remove the last element from the vector
    v.pop_back();

    // Initialize a new vector with 3 elements, each set to 50
    vector<int>v2(3,50);

    // Swap the contents of vectors v and v2
    swap(v,v2);

    // Iterate through the vector v after swap and print elements
    for (auto element:v)
    {
        cout<<element<<" ";
    }

    cout<<endl;

    // Iterate through the vector v2 after swap and print elements
    for (auto element:v2)
    {
        cout<<element<<" ";
    }

    // Sort the vector v in ascending order
    sort(v.begin(),v.end());

    return 0;

}