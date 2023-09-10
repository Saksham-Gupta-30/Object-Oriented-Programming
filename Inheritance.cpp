#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee {
public:
    virtual void AskForPromotion() = 0;
};

class Employee: public AbstractEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
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

class Developer: public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string subject): Employee(name, company, age) {
        FavProgrammingLanguage = subject;
    }
    void FixBug() {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher: public Employee {
public:
    string Subject;
    Teacher(string name, string company, int age, string subject): Employee(name, company, age) {
        Subject = subject;
    }
    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
};

int main() { // Inheritance is the process of creating new classes from existing classes.
    Developer dev = Developer("Saksham Gupta", "Google", 21, "C++");
    dev.FixBug();
    dev.AskForPromotion();

    Teacher teacher = Teacher("Jack", "Cool School", 35, "History");
    teacher.PrepareLesson();
    teacher.AskForPromotion();

    return 0;
}