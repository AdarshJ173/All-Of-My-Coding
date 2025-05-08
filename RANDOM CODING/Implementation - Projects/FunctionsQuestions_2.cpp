#include<bits/stdc++.h>
using namespace std;

/*
2.Write a function that takes a string as an argument and returns a new string with all the vowels removed.
*/

string RemovedVowels(string word){
    string newWord = "";
    for(int i = 0; i < word.length(); i++){
        if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U'){
            newWord += word[i];
        }
    }
    return newWord;
}

int main(){
    string sentence;
    cout<<"enter word/sentence: ";getline(cin, sentence); // Changed to getline to accept sentences with spaces
    cout << RemovedVowels(sentence) << endl;
}