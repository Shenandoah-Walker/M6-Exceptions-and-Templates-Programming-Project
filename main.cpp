//Factory workers with encapsulated exceptions
//Client test program

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include <stdexcept>

using namespace std;

int main() {
  //Create variables to store user input for each employee type's information and initialize them to default values in case the user does not enter any input.
    int choice = 0, employeeNumber = 0, shift = 1, requiredTrainingHours = 0, attendedTrainingHours = 0;
    string name = "Default", hireDate = "0/0/0000";
    double hourlyPayRate = 0.0, monthlyBonus = 0.0, annualSalary = 0.0, annualProductionBonus = 0.0;

    while (choice != 4) {
        cout << "Please select the type of employee you would like to enter." << endl;
        cout << "1. Production Worker" << endl;
        cout << "2. Shift Supervisor" << endl;
        cout << "3. Team Leader" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;


        while (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please try again." << endl;
            cin >> choice;
        }

       try {

         if (choice == 1) {
            cout << "Please enter the following information for the Production Worker:" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Employee Number: ";
            cin >> employeeNumber;
            cout << "Hire Date: ";
            cin >> hireDate;
            cout << "Shift: ";
            cin >> shift;
            cout << "Hourly Pay Rate: ";
            cin >> hourlyPayRate;

            ProductionWorker ProductionWorker1(name, employeeNumber, hireDate, shift, hourlyPayRate);

            } 

          else if (choice == 2) {
            cout << "Please enter the following information for the Shift Supervisor:" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Employee Number: ";
            cin >> employeeNumber;
            cout << "Hire Date: ";
            cin >> hireDate;
            cout << "Annual Salary: ";
            cin >> annualSalary;
            cout << "Annual Production Bonus: ";
            cin >> annualProductionBonus;

            ShiftSupervisor ShiftSupervisor1(name, employeeNumber, hireDate, annualSalary, annualProductionBonus);
          }

          else if (choice == 3) {
            cout << "Please enter the following information for the Team Leader:" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Employee Number: ";
            cin >> employeeNumber;
            cout << "Hire Date: ";
            cin >> hireDate;
            cout << "Shift: ";
            cin >> shift;
            cout << "Hourly Pay Rate: ";
            cin >> hourlyPayRate;
            cout << "Monthly Bonus: ";
            cin >> monthlyBonus;
            cout << "Required Training Hours: ";
            cin >> requiredTrainingHours;
            cout << "Attended Training Hours: ";
            cin >> attendedTrainingHours;
            TeamLeader TeamLeader1(name, employeeNumber, hireDate, shift, hourlyPayRate, monthlyBonus, requiredTrainingHours, attendedTrainingHours);
          }
         
       }

       
       }
    };


  
return 0;
};

