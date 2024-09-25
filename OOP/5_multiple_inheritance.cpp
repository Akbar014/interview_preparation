#include <iostream>
#include <string>
using namespace std;


class Person {
    
public:

    string name;
    int age;
    
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void personalInfo() {
        cout << name << " - " << age << endl;
    }
};

class Company {

public:

    string cname;
    string cloc;
   
    Company(string cname, string cloc) {
        this->cname = cname;
        this->cloc = cloc;
    }

    void companyInfo() {
        cout << cname << " - " << cloc << endl;
    }
};

// Derived class employee inheriting from both Person and Company
class Employee : public Person, public Company {
public:
    // Constructor for Employee, calling both base class constructors
    Employee(string name, int age, string cname, string cloc)
        : Person(name, age), Company(cname, cloc) {
    }
};

int main() {
    Employee obj("Sayed", 24, "Google", "USA");

  
    obj.companyInfo(); 
    obj.personalInfo(); 

    return 0;
}
