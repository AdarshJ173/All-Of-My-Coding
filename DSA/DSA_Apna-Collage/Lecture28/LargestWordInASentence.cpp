#include<bits/stdc++.h>
using namespace std;

int main(){

    // Inputting the length of the sentence
    int sentenceLength;
    cin >> sentenceLength;

    // Ignoring the newline character left in the input buffer after reading the sentence length
    cin.ignore();

    // Declaring a character array to store the sentence, with an extra space for the null character
    char sentenceArray[sentenceLength + 1];

    // Reading the sentence into the character array
    cin.getline(sentenceArray, sentenceLength);
    // Ignoring any additional newline characters in the input buffer
    cin.ignore();

    // Initializing variables to track the current word length, maximum word length, start of the current word, and start of the maximum word
    int currentPosition = 0;
    int currentWordLength = 0, maxWordLength = 0;
    int startOfCurrentWord = 0, startOfMaxWord = 0;

    // Loop to iterate through the sentence to find the longest word
    while (1)
    {
        // Checking if the current character is a space or the end of the sentence
        if(sentenceArray[currentPosition] == ' ' || sentenceArray[currentPosition] == '\0'){

            // If the current word length is greater than the maximum word length found so far, update the maximum word length and its start position
            if(currentWordLength > maxWordLength){
                maxWordLength = currentWordLength;
                startOfMaxWord = startOfCurrentWord;
            }
            // Resetting the current word length and updating the start position for the next word
            currentWordLength = 0;
            startOfCurrentWord = currentPosition + 1;
        }
        else
        // Incrementing the current word length if the character is not a space or the end of the sentence
        currentWordLength++;

        // Breaking the loop if the end of the sentence is reached
        if(sentenceArray[currentPosition] == '\0'){
            break;
        }
        // Moving to the next character in the sentence
        currentPosition++;
    }
    
    // Outputting the length of the longest word
    cout << maxWordLength << endl;

    // Outputting the longest word
    for (int i = 0; i < maxWordLength; i++)
    {
        cout << sentenceArray[i + startOfMaxWord];
    }

}