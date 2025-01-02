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
    teacher(){
        cout << "i am a constructor " << endl;
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

};

int main(){
    teacher t1;
    teacher t2;

    t1.name = "abhijeet";
    t1.subject = "C++";
    t1.dept = "computer Science";

    cout << "name : " << t1.name << endl;
    cout << "subject : " << t1.subject << endl;
    cout << "department : " << t1.dept << endl;

    t1.changeSalary(5000);
    cout << "salary : " << t1.giveSalary() << endl;

    return 0;
}