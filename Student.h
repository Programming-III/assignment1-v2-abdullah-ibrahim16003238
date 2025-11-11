#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student : public Person {
private:
    int yearLevel;
    string major;

public:

    Student() : Person() {
        yearLevel = 0;
        major = "";
    }
Student(string name, int id, int yearLevel, string major)
        : Person(name, id) {
        this->yearLevel = yearLevel;
        this->major = major;
    }
~Student() {}
    void setYearLevel(int level) { yearLevel = level; }
    void setMajor(string m) { major = m; }

    int getYearLevel() const { return yearLevel; }
    string getMajor() const { return major; }

    void display() const override {
        cout << "Student Info:" << endl;
        Person::display();
        cout << "Year: " << yearLevel << endl;
        cout << "Major: " << major << endl;
    }
};

#endif
