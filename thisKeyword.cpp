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
    t1.getinfo();

    return 0;
}