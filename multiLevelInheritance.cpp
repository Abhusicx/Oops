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

class GradStudent : public Student {
public:
    string researchArea;

    // Constructor
    GradStudent(string name, int age, int rollno, string researchArea) {
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->researchArea = researchArea;
    }

    // Function to display information
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    GradStudent s1("Abhijeet Thakur", 21, 1, "Artificial Intelligence");

    s1.getInfo();
    return 0;
}
