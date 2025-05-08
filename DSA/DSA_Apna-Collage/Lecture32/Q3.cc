#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    "abcabsgacde"
    frequency  = 3
    ouput = 3
    */

   string inputString = "iohaeriohrghoiihoihhpofshaeeorih";

   int frequencyArray[26];

   for (int i = 0; i < 26; i++)
   {
        frequencyArray[i] = 0;
   }
   
    for (int i = 0; i < inputString.size(); i++)
    {
        frequencyArray[inputString[i]-'a']++;
    }
    
    char mostFrequentCharacter = 'a';
    int maxFrequency = 0;

    for (int i = 0; i < 26; i++)
    {
        if(frequencyArray[i]>maxFrequency){
            maxFrequency = frequencyArray[i];
            mostFrequentCharacter = i + 'a';
        }
    }
    
    cout<<maxFrequency<<" "<<mostFrequentCharacter<<endl;
    
return 0;
}