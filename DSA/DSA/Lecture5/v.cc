#include <iostream>
#include <random>
#include<math.h>

using namespace std;

int main() {
  // Seed the random number generator
  random_device rd;
  mt19937 generator(rd());
  uniform_int_distribution<int> distribution(1, 100);

  int secretNumber = distribution(generator);

  int guess;
  int numGuesses = 0;
  cout<< "This is the output"<<endl;

  cout << "Guess a number between 1 and 100 (inclusive)" << endl;
  do {
    cin >> guess;
    numGuesses++;

    if (guess > secretNumber) {
      cout << "Too high! Guess again." << endl;
    } else if (guess < secretNumber) {
      cout << "Too low! Guess again." << endl;
    }
  } while (guess != secretNumber);

  cout << "Congratulations! You guessed the number in " << numGuesses << " guesses." << endl;

  return 0;

  cout<< "The Program has ended here";
}
