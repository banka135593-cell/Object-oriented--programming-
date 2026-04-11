#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_STUDENTS = 50;
const int MAX_SUBJECTS = 6;

struct Student {
    int rollNo;
    string name;
    int semester;
    int totalClasses[MAX_SUBJECTS];
    int attendedClasses[MAX_SUBJECTS];
    float subjectPercentage[MAX_SUBJECTS];
    float overallPercentage;
};

Student students[MAX_STUDENTS];
int studentCount = 0;
int subjectCount;

// Function to add student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Student limit reached!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> students[studentCount].rollNo;

    cout << "Enter Name: ";
    cin >> students[studentCount].name;

    cout << "Enter Semester: ";
    cin >> students[studentCount].semester;

    for (int i = 0; i < subjectCount; i++) {
        students[studentCount].totalClasses[i] = 0;
        students[studentCount].attendedClasses[i] = 0;
        students[studentCount].subjectPercentage[i] = 0;
    }

    students[studentCount].overallPercentage = 0;

    studentCount++;
    cout << "Student Added Successfully!\n";
}

// Function to mark attendance
void markAttendance() {
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == roll) {
            for (int j = 0; j < subjectCount; j++) {
                cout << "\nSubject " << j + 1 << ":\n";
                cout << "Enter Total Classes Conducted: ";
                cin >> students[i].totalClasses[j];

                cout << "Enter Classes Attended: ";
                cin >> students[i].attendedClasses[j];

                if (students[i].totalClasses[j] > 0) {
                    students[i].subjectPercentage[j] =
                        (float)students[i].attendedClasses[j] /
                        students[i].totalClasses[j] * 100;
                }
            }
            cout << "Attendance Updated Successfully!\n";
            return;
        }
    }
    cout << "Student Not Found!\n";
}

// Function to calculate overall percentage
void calculateOverall() {
    for (int i = 0; i < studentCount; i++) {
        float totalPercent = 0;
        for (int j = 0; j < subjectCount; j++) {
            totalPercent += students[i].subjectPercentage[j];
        }
        students[i].overallPercentage = totalPercent / subjectCount;
    }
}

// Function to display report of one student
void displayStudentReport() {
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == roll) {
            cout << "\n----- Attendance Report -----\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Semester: " << students[i].semester << endl;

            for (int j = 0; j < subjectCount; j++) {
                cout << "Subject " << j + 1 << " Attendance: "
                     << fixed << setprecision(2)
                     << students[i].subjectPercentage[j] << "%\n";
            }

            cout << "Overall Percentage: "
                 << students[i].overallPercentage << "%\n";

            if (students[i].overallPercentage >= 75)
                cout << "Status: Eligible for Exam\n";
            else
                cout << "Status: Not Eligible (Below 75%)\n";

            return;
        }
    }
    cout << "Student Not Found!\n";
}

// Function to display all students
void displayAll() {
    calculateOverall();

    cout << "\n=========== All Students Attendance ===========\n";

    for (int i = 0; i < studentCount; i++) {
        cout << "\nRoll No: " << students[i].rollNo
             << " | Name: " << students[i].name
             << " | Overall: "
             << fixed << setprecision(2)
             << students[i].overallPercentage << "%\n";
    }
}

int main() {
    int choice;

    cout << "Enter Number of Subjects in Semester: ";
    cin >> subjectCount;

    do {
        cout << "\n====== Student Attendance Tracker ======\n";
        cout << "1. Add Student\n";
        cout << "2. Mark Attendance\n";
        cout << "3. Display Student Report\n";
        cout << "4. Display All Students\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: markAttendance(); break;
            case 3:
                calculateOverall();
                displayStudentReport();
                break;
            case 4: displayAll(); break;
            case 5: cout << "Exiting Program...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
