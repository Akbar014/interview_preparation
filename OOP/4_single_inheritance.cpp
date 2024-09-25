#include <iostream>
#include <string>
using namespace std;

// Base class A
class A {
public:
    // Constructor
    string name;
    A(string name) {
        this->name = name;
    }

    // Method to display the name
    void display() {
        cout << name << endl;
    }
};

// Derived class B inheriting from A
class B : public A {
public:
    // Constructor
     

    void display1(){
        cout << "This class inherits A class " << endl;
        display();
    }
};

int main() {
    // Creating an object of class B
    B obj("Sayed");

    // Calling the display method
    // obj.display();  // Output: Sayed
    obj.display1();

    return 0;
}
