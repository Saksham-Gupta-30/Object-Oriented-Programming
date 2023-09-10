#include <bits/stdc++.h>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;
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

int main() { // Constructor is a special type of method that is called when an object is created.
    Employee employee1 = Employee("Saksham Gupta", "Google", 21);
    employee1.getIntroduction();

    return 0;
}