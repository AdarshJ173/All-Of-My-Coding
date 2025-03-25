#include<iostream>
using namespace std;
                   
int main(){

    /*
    What are character arrays?
    -Character arrays are array of characters

    Declaration:
        char arr[n+1];
        n+1 because the last character is a null character '\0', that means the end of the array

    */

   char characterArray[100] = "Apple";

   int index = 0;

   while (characterArray[index] != '\0')
   {
        cout<<characterArray[index]<<endl;
        index++;
   }
   
   /*
   for (int i = 0; i < 5; i++)
   {
        cout<<characterArray[i]<<endl;
   }
   */


  char inputArray[100];
  cin>>inputArray;

  cout<<inputArray<<endl;

  cout<<inputArray[2];
   

}