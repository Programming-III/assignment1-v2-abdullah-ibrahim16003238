#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
using namespace std;

class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor() : Person() {
        department = "";
        experienceYears = 0;
    }
Instructor(string name, int id, string department, int experienceYears)
        : Person(name, id) {
        this->department = department;
        this->experienceYears = experienceYears;
    }
~Instructor() {}
void setDepartment(string dept) { department = dept; }
void setExperienceYears(int years) { experienceYears = years; }
string getDepartment() const { return department; }
int getExperienceYears() const { return experienceYears; }
void display() const override {
        cout << "Instructor Info:" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Department: " << department << endl;
        cout << "Experience: " << experienceYears << " years" << endl;
    }
};

#endif
