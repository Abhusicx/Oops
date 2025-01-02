#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout << "parent class\n" ;
    }    

    virtual void hello(){
        cout << "hello from parents\n";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "child class\n";
    }

    void hello(){
        cout << "hello from parents\n";
    }
};


int main(){
    Child c1;
    c1.hello();
    return 0;
}