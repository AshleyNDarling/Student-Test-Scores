// Ashley Darling
// This program allows a teacher to enter test scores for up to 15 students and calculates the average test score for each student, displaying the results in a formatted table. 

// Set MAX_STUDENTS = 15
// Prompt the user for the number of students
// If the number of students entered is greater than MAX_STUDENTS, display an error message and exit
// Declare arrays for test grades (test1, test2, test3) and average score (average) with size MAX_STUDENTS
// For each student:
// a. Prompt the user for test1 grade
// b. Prompt the user for test2 grade
// c. Prompt the user for test3 grade
// d. Calculate the average score as (test1 + test2 + test3) / 3
// Store the test grades and average score in the corresponding arrays
// Print a table showing the test grades and average test score for each student
// End

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int MAX_STUDENTS = 15;
    int numStudents;

    cout << "Enter the number of students (maximum " << MAX_STUDENTS << "): ";
    cin >> numStudents;

    if (numStudents > MAX_STUDENTS) {
        cout << "Error: The number of students entered is greater than the maximum allowed." << endl;
        return 1;
    }

    double test1[MAX_STUDENTS], test2[MAX_STUDENTS], test3[MAX_STUDENTS], average[MAX_STUDENTS];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter test 1 grade for student " << i+1 << ": ";
        cin >> test1[i];

        cout << "Enter test 2 grade for student " << i+1 << ": ";
        cin >> test2[i];

        cout << "Enter test 3 grade for student " << i+1 << ": ";
        cin >> test3[i];

        average[i] = (test1[i] + test2[i] + test3[i]) / 3.0;
    }

    cout << setw(10) << left << "Student #" << setw(15) << left << "Test 1" << setw(15) << left << "Test 2" << setw(15) << left << "Test 3" << setw(15) << left << "Average" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << setw(10) << left << i+1 << setw(15) << left << fixed << setprecision(2) << test1[i] << setw(15) << left << fixed << setprecision(2) << test2[i] << setw(15) << left << fixed << setprecision(2) << test3[i] << setw(15) << left << fixed << setprecision(2) << average[i] << endl;
    }

    return 0;
}
