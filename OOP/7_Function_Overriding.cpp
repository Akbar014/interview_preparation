#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function for overriding
    virtual void sound() {
        cout << "Some generic animal sound" << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Overriding the sound method
    void sound() override {
        cout << "Bark" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Overriding the sound method
    void sound() override {
        cout << "Meow" << endl;
    }
};

int main() {
    // Creating objects of different classes
    Animal* animalPtr;  // Pointer of type Animal

    Dog dog;
    Cat cat;

    // Using polymorphism to call overridden methods
    animalPtr = &dog;
    animalPtr->sound();  // Output: Bark (calls Dog's sound method)

    animalPtr = &cat;
    animalPtr->sound();  // Output: Meow (calls Cat's sound method)

    return 0;
}
