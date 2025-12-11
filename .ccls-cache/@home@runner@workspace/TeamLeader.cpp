#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
#include <iostream>
#include <string>

using namespace std;

TeamLeader::TeamLeader() : ProductionWorker() {
    monthlyBonus = 0.0;
    requiredTrainingHours = 0;
    attendedTrainingHours = 0;
}

TeamLeader::TeamLeader(string name, int employeeNumber, string hireDate, int shift, double hourlyPayRate, double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours) : ProductionWorker(name, employeeNumber, hireDate, shift, hourlyPayRate) {
    this->monthlyBonus = monthlyBonus;
    this->requiredTrainingHours = requiredTrainingHours;
    this->attendedTrainingHours = attendedTrainingHours;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}

void TeamLeader::setMonthlyBonus(double monthlyBonus) {
    this->monthlyBonus = monthlyBonus;
}

void TeamLeader::setRequiredTrainingHours(int requiredTrainingHours) {
    this->requiredTrainingHours = requiredTrainingHours;
}

void TeamLeader::setAttendedTrainingHours(int attendedTrainingHours) {
    this->attendedTrainingHours = attendedTrainingHours;
}

void TeamLeader::printTeamLeader() {
    printProductionWorker();
    cout << "Monthly Bonus: " << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}