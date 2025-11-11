#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Student.h"
using namespace std;

class Course {
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

public:
    Course() {
courseCode = "";
courseName = "";
maxStudents = 0;
students = nullptr;
currentStudents = 0;
    }
Course(string code, string name, int maxStudents) {
this->courseCode = code;
this->courseName = name;
this->maxStudents = maxStudents;
this->students = new Student[maxStudents];
this->currentStudents = 0;
    }

 ~Course() {
        delete[] students;
    }
void setCourseCode(string code) { courseCode = code; }
void setCourseName(string name) { courseName = name; }
void setMaxStudents(int max) { maxStudents = max; }
string getCourseCode() const { return courseCode; }
string getCourseName() const { return courseName; }
int getMaxStudents() const { return maxStudents; }

void addStudent(const Student& s) {
        if (currentStudents < maxStudents) {
            students[currentStudents++] = s;
        } else {
            cout << "Course is full. Cannot add more students." << endl;
        }
    }
 void displayCourseInfo() const {
        cout << "Course: " << courseCode << " - " << courseName << endl;
        cout << "Max Students: " << maxStudents << endl;

        cout << "Currently Enrolled: ";
        if (currentStudents == 0) {
            cout << "None" << endl;
        } else {
            for (int i = 0; i < currentStudents; ++i) {
                cout << students[i].getName() << " (ID: " << students[i].getId() << ")";
                if (i < currentStudents - 1)
                    cout << ", ";
            }
            cout << endl;
        }
    }
};


#endif
