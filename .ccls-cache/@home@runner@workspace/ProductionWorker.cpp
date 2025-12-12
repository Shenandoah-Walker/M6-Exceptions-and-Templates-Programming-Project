#include "ProductionWorker.h"
#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

ProductionWorker::ProductionWorker() : Employee() {
    shift = 1;
    hourlyPayRate = 0.0;
};

ProductionWorker::ProductionWorker(string name, int employeeNumber, string hireDate, int shift, double hourlyPayRate) : Employee(name, employeeNumber, hireDate) {

    setShift(shift);
    setHourlyPayRate(hourlyPayRate);

};

int ProductionWorker::getShift() const {
    return shift;
};

double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
};

void ProductionWorker::setShift(int shift) {
    if (shift != 1 && shift != 2) {
        throw InvalidShift();
    }
    this->shift = shift;
};

void ProductionWorker::setHourlyPayRate(double hourlyPayRate) {
    if (hourlyPayRate < 0) {
        throw InvalidHourlyPayRate();
    }
    this->hourlyPayRate = hourlyPayRate;
};

void ProductionWorker::printProductionWorker() {
    printEmployee();
    cout << "Shift: " << shift << endl;
    cout << "Hourly Pay Rate: " << hourlyPayRate << endl;
};