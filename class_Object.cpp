#include<iostream>
#include<string>
using namespace std;

class teacher{
public:
    //properties    //attributes
    string name;
    string dept;
    string subject;
    double salary;

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

};

int main(){
    teacher t1;

    t1.name = "abhijeet";
    t1.subject = "C++";
    t1.dept = "computer Science";
    t1.salary = 25000;

    cout << "name : " << t1.name << endl;
    cout << "subject : " << t1.subject << endl;
    cout << "department : " << t1.dept << endl;
    cout << "salary : " << t1.salary << endl;

    t1.changeSalary(5000);
    cout << "salary : " << t1.giveSalary() << endl;

    return 0;
}