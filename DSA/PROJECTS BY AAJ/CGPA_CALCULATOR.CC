#include <iostream>
using namespace std;

// Function to calculate CGPA
int main() {
    int numCourses; // Variable to store the number of courses
    float totalCredits = 0, totalGradePoints = 0; // Variables to store total credits and total grade points

    // Prompt user to enter the number of courses
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    // Loop to iterate through each course
    for (int i = 0; i < numCourses; i++) {
        string courseName; // Variable to store the course name
        int credits; // Variable to store the credits for the course
        char grade; // Variable to store the grade for the course
        float gradePoints; // Variable to store the grade points for the course

        // Prompt user to enter details for the course
        cout << "\nEnter details for course " << i + 1 << ":\n";
        cout << "Course name: ";
        cin >> courseName;
        cout << "Credits: ";
        cin >> credits;
        cout << "Grade (A/B/C/D/F): ";
        cin >> grade;

        // Calculate grade points based on the grade
        switch(grade) {
            case 'A': gradePoints = 4.0; break; // Assign 4.0 grade points for grade A
            case 'B': gradePoints = 3.0; break; // Assign 3.0 grade points for grade B
            case 'C': gradePoints = 2.0; break; // Assign 2.0 grade points for grade C
            case 'D': gradePoints = 1.0; break; // Assign 1.0 grade points for grade D
            case 'F': gradePoints = 0.0; break; // Assign 0.0 grade points for grade F
            default: gradePoints = 0.0; break; // Assign 0.0 grade points for invalid grade
        }

        // Update total credits and total grade points
        totalCredits += credits;
        totalGradePoints += credits * gradePoints;

        // Display course details
        cout << "Course: " << courseName << ", Credits: " << credits << ", Grade: " << grade << endl;
    }

    // Calculate CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display results
    cout << "\n--- Results ---\n";
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
