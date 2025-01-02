#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;

    Student(){
        cout << "Non - meterized constructor" << endl;
    }

    Student(string name){
        this-> name = name;
        cout << "parameterized constructor" << endl;
    }
};

int main(){
    //Student s1;
    Student s1("abhijeet thakur");
    return 0;
}