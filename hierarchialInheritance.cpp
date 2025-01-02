#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person {
public:
    string subject;
};

class GradStudent : public Student, public Teacher {
public:
    string researchArea;

    void getInfo() {
        cout << "Name: " << Student::name << endl;
        cout << "Age: " << Student::age << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Subject: " << subject << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    GradStudent gs1;
    gs1.Student::name = "Abhijeet Thakur"; // Resolve ambiguity for name
    gs1.Student::age = 21;                // Resolve ambiguity for age
    gs1.rollno = 101;
    gs1.subject = "DBMS";
    gs1.researchArea = "Artificial Intelligence";

    gs1.getInfo();
    return 0;
}
