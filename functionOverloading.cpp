#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    void show(int x){
        cout << "int : " << x << endl;
    }

    void show(char ch){
        cout << "char : " << ch << endl;
    }
};


int main(){
    Student p1;
    p1.show(101);
    return 0;
}