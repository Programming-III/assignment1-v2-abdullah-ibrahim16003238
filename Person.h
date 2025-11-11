#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;

public:
    Person() {
        name = "";
        id = 0;
    }
Person(string name, int id) {
        this->name = name;
        this->id = id;
    }

~Person() {}
void setName(string name) { this->name = name; }
void setId(int id) { this->id = id; }
string getName() const { return name; }
int getId() const { return id; }
virtual void display() const {
        cout << "Name: " << name << " (ID: " << id << ")" << endl;
    }
};
#endif
