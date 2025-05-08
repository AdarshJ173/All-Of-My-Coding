#include<iostream>
#include<deque>
using namespace std;
                   
int main(){

    /*
    Deque:
        1.push and pop from the end
        2.insert and delete from the start.
        3.header file: <deque>
    */

   deque<int> dq;
   dq.push_back(1);
   dq.push_back(2);
   dq.push_front(3);
   dq.push_front(4);

   for (auto i : dq)
   {
        cout<<i<<" ";
   }
   cout<<"\n";
   
   dq.pop_back();
   dq.pop_front();

   for (auto i : dq)
   {
        cout<<i<<" ";
   }

   cout<<dq.size()<<endl;

}