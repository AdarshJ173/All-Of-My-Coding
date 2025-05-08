#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

struct Course {
    string name;
    int credits;
    char grade;
    float gradePoints;
};

float calculateGradePoints(char grade) {
    switch(grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

void calculateGPA(vector<Course>& courses, float& totalCredits, float& totalGradePoints) {
    for (const auto& course : courses) {
        totalCredits += course.credits;
        totalGradePoints += course.credits * course.gradePoints;
    }
}

int main() {
    vector<Course> courses;
    float totalCredits = 0, totalGradePoints = 0;
    int numCourses;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; i++) {
        Course course;
        cout << "\nEnter details for course " << i + 1 << ":\n";
        cout << "Course name: ";
        cin >> course.name;
        cout << "Credits: ";
        cin >> course.credits;
        cout << "Grade (A/B/C/D/F): ";
        cin >> course.grade;
        course.gradePoints = calculateGradePoints(course.grade);
        courses.push_back(course);
    }

    calculateGPA(courses, totalCredits, totalGradePoints);

    float gpa = totalGradePoints / totalCredits;

    cout << "\n--- Results ---\n";
    cout << "Course Details:\n";
    for (const auto& course : courses) {
        cout << course.name << ": Credits - " << course.credits << ", Grade - " << course.grade << "\n";
    }
    cout << "\nTotal Credits: " << totalCredits << "\n";
    cout << "Total Grade Points: " << totalGradePoints << "\n";
    cout << "GPA: " << fixed << setprecision(2) << gpa << "\n";

    // File handling for storing results
    ofstream outFile("gpa_results.txt");
    if (outFile.is_open()) {
        outFile << "GPA Results\n";
        outFile << "Total Credits: " << totalCredits << "\n";
        outFile << "Total Grade Points: " << totalGradePoints << "\n";
        outFile << "GPA: " << fixed << setprecision(2) << gpa << "\n";
        outFile.close();
        cout << "\nResults have been saved to 'gpa_results.txt'\n";
    } else {
        cout << "\nUnable to save results to file.\n";
    }

    return 0;
}