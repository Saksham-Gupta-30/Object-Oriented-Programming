#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee {
public:
    virtual void AskForPromotion() = 0;
};

class Employee: public AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18) {
            Age = age;
            cout << "Age set to " << age << endl;
        }
        else {
            cout << "Invalid age!" << endl;
        }
    }
    int getAge() {
        return Age;
    }

    void getIntroduction() {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion() override {
        if (Age > 21) {
            cout << Name << " got promoted!" << endl;
        } else {
            cout << Name << ", sorry no promotion for you!" << endl;
        }
    }
};

int main() { // Abstraction is the process of hiding certain details and showing only essential information to the user.
    // Employee employee1 = Employee("Saksham Gupta", "Google", 21);
    // employee1.getIntroduction();

    // employee1.setAge(22);
    // employee1.getIntroduction();

    // employee1.AskForPromotion();

    AbstractEmployee* employee1 = new Employee("Saksham Gupta", "Google", 21);
    employee1->AskForPromotion();
    static_cast<Employee*>(employee1)->setAge(22);
    employee1->AskForPromotion();
    delete employee1;

    return 0;
}