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
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }

    //destructor
    ~Student(){
        cout << "hi i delete everything" << endl;
        delete cgpaptr;
    }

    void getinfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaptr << endl;
    }
};

int main() {
    Student s1("rahul kumar", 8.9);

    s1.getinfo();
    
    return 0;
}
