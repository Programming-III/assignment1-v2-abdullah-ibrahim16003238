#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

using namespace std;
int main() {
   
Instructor instructor("Dr. Lina Khaled", 1001, "Computer Science", 5);
Student student1("Omar Nabil", 2202, 2, "Informatics");
Course course("CS101", "Introduction to Programming", 3);
course.addStudent(student1);
course.displayCourseInfo();
cout << endl;
instructor.display();
cout << endl;
student1.display();

    return 0;

}
