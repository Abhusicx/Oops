#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
    }

    void getinfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaptr << endl;
    }
};

int main() {
    Student s1("rahul kumar", 8.9);
    Student s2(s1); //"neha kumar"

    s1.getinfo();
    *(s2.cgpaptr) = 9.2;
    s1.getinfo();
    return 0;
}
