#include<iostream>
#include<string>
using namespace std;

void fun(){
    static int x = 10;  // static variable - initialized only once
    cout << x << endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}
