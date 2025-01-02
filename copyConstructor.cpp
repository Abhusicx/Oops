#include<iostream>
#include<string>
using namespace std;

class teacher{
public:
    //properties    //attributes
    string name;
    string dept;
    string subject;
    double salary = 25000;

    //constructor
    //parameterized constructor
    teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //copy constructor
    teacher(teacher &originalobject) {                 //pass by reference
        cout << "i'm a custom copy constructor" << endl;
        this->name = originalobject.name;
        this->dept = originalobject.dept;
        this->subject = originalobject.subject;
        this->salary = originalobject.salary;
    }

    //methods   //member function
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter
    void changeSalary(double s){
        salary = s;
    }

    //getter
    double giveSalary(){
        return salary;
    }

    void getinfo(){
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
        cout << "dept : " << dept << endl;
        cout << "salary : " << salary << endl;
    }

};

int main(){
    teacher t1("Abhijeet thakur", "computer Science engineering", "C++", 100000);

    teacher t2(t1);             //custom copy constructor -invoke
    t2.getinfo();

    return 0;
}