#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

Employee::Employee() {
    name = "Default";
    employeeNumber = 0;
    hireDate = "0/0/0000";
}

Employee::Employee(string name, int employeeNumber, string hireDate) {
    this->name = name;
    setEmployeeNumber(employeeNumber);
    this->hireDate = hireDate;
};

string Employee::getName() const {
    return name;
}

int Employee::getEmployeeNumber() const {
    return employeeNumber;
}

string Employee::getHireDate() const {
    return hireDate;
}

void Employee::setName(string name) {
    this->name = name;
}

void Employee::setEmployeeNumber(int employeeNumber) {
    if (employeeNumber < 0 || employeeNumber > 9999) {
        throw InvalidEmployeeNumber();
    }
    this->employeeNumber = employeeNumber;
}

void Employee::setHireDate(string hireDate) {
    this->hireDate = hireDate;
}

void Employee::printEmployee() {
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}