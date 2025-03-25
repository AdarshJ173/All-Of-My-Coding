#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void procrastinateCode() {
    cout << "Alright, time to start coding..." << endl;
    cout << "But first, let me quickly check Reddit." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(10));
    cout << "Okay, Reddit was a rabbit hole. Back to coding!" << endl;
    cout << "Wait, did someone mention a new game release?" << endl;
    std::this_thread::sleep_for(std::chrono::hours(2));
    cout << "Whoops, lost track of time there. I should really get back to work." << endl;
    cout << "Oh look, a YouTube video about the history of programming languages!" << endl;
    std::this_thread::sleep_for(std::chrono::minutes(45));
    cout << "Fascinating stuff! Alright, no more distractions." << endl;
    cout << "...Is that a bag of chips I hear calling my name?" << endl;
}

int main() {
    cout << "The life of a programmer:" << endl;
    procrastinateCode();
    cout << "You know what, I'll just do it tomorrow. Time for bed." << endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

void programmerLife() {
    cout << "The life of a programmer:" << endl;
    cout << "Wake up, coffee, code, repeat." << endl;
    cout << "Error: coffee.exe not found. Panic mode activated." << endl;
    cout << "Debugging... Debugging... Ah, there's the issue: empty coffee cup." << endl;
    cout << "Refill coffee cup, resume coding." << endl;
    cout << "Compile, run, crash. Google the error message." << endl;
    cout << "Stack Overflow to the rescue!" << endl;
    cout << "Fix bug, celebrate with more coffee." << endl;
    cout << "Commit, push, deploy. Time for a well-deserved nap." << endl;
}

int main() {
    programmerLife();
    return 0;
}

void printValue(int num) {
    cout << num << endl;
}

void printValue(double num) {
    cout << num << endl;
}

int main() {
    printValue(42);   // Calls first printValue
    printValue(3.14); // Calls second printValue
    return 0;
}