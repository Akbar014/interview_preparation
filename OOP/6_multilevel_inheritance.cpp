#include <iostream>
#include <string>
using namespace std;


class Grandparent {
protected:
    string grandparent_name;

public:

    Grandparent(string grandparent_name) {
        this->grandparent_name = grandparent_name;
    }


    void displayGrandparent() {
        cout << "Grandparent Name: " << grandparent_name << endl;
    }
};


class Parent : public Grandparent {
protected:
    string parent_name;

public:
   
    Parent(string grandparent_name, string parent_name) 
        : Grandparent(grandparent_name) {
        this->parent_name = parent_name;
    }


    void displayParent() {
        cout << "Parent Name: " << parent_name << endl;
    }
};


class Child : public Parent {
private:
    string child_name;

public:

    Child(string grandparent_name, string parent_name, string child_name) 
        : Parent(grandparent_name, parent_name) {
        this->child_name = child_name;
    }


    void displayChild() {
        cout << "Child Name: " << child_name << endl;
    }
};

int main() {

    Child child("John Sr.", "John Jr.", "Johnny");

 
    child.displayGrandparent();  
    child.displayParent();       
    child.displayChild();       

    return 0;
}
