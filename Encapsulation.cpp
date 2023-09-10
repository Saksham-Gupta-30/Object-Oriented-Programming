#include <bits/stdc++.h>
using namespace std;

class Employee {
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
};

int main() { // Encapsulation is the process of wrapping up data and methods into a single unit.
    Employee employee1 = Employee("Saksham Gupta", "Google", 21);
    employee1.getIntroduction();

    employee1.setAge(22);
    employee1.getIntroduction();

    return 0;
}