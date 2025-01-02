#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized constructor for Person
    Person(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Parent constructor" << endl;
    }
};

class Student : public Person {
public:
    int rollno;

    // Parameterized constructor for Student
    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
        cout << "Child constructor" << endl;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollno << endl;
    }
};

int main() {
    Student s1("Abhijeet Thakur", 21, 1);

    s1.getInfo();

    return 0;
}
