#include<iostream>
using namespace std;

class XYZ {
private:
    int value;

public:
    XYZ() {
        value = 42;
        cout << "Constructor: Value initialized\n";
    }

    friend void displayValue(XYZ obj);

    ~XYZ() {
        cout << "Destructor: Object destroyed\n";
    }
};

void displayValue(XYZ obj) {
    cout << "Value inside object: " << obj.value << endl;
}

int main() {
    XYZ obj;
    displayValue(obj);

    cout << "End of main function\n";
    return 0;
}
