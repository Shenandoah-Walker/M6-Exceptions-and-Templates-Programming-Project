#include "Employee.h"
#include "ShiftSupervisor.h"
#include <iostream>
#include <string>

using namespace std;

ShiftSupervisor::ShiftSupervisor() : Employee() {
    annualSalary = 0.0;
    annualProductionBonus = 0.0;
}

ShiftSupervisor::ShiftSupervisor(string name, int employeeNumber, string hireDate, double annualSalary, double annualProductionBonus) : Employee(name, employeeNumber, hireDate) {
    this->annualSalary = annualSalary;
    this->annualProductionBonus = annualProductionBonus;
}

double ShiftSupervisor::getAnnualSalary() const {
  return annualSalary;
}

double ShiftSupervisor::getAnnualProductionBonus() const {
  return annualProductionBonus; 
}

void ShiftSupervisor::setAnnualSalary(double annualSalary) {
  this->annualSalary = annualSalary;
}

void ShiftSupervisor::setAnnualProductionBonus(double annualProductionBonus) {
  this->annualProductionBonus = annualProductionBonus;
}

void ShiftSupervisor::printShiftSupervisor() {
  printEmployee();
  cout << "Annual Salary: " << annualSalary << endl;
  cout << "Annual Production Bonus: " << annualProductionBonus << endl;
}
