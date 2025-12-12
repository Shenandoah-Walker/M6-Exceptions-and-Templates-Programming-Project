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
  //Create variables to store user input for each employee type's information and initialize them to default values.
    int choice = 0, employeeNumber = 0, shift = 0, requiredTrainingHours = 0, attendedTrainingHours = 0;
    string name = "Default", hireDate = "0/0/0000";
    double hourlyPayRate = 0.0, monthlyBonus = 0.0, annualSalary = 0.0, annualProductionBonus = 0.0;

    //Prompt the user to select the type of employee they would like to enter and store their choice in the variable choice. The program will continue to prompt the user until they select option 4 to exit the program.
    while (choice != 4) {
        cout << "Please select the type of employee you would like to enter." << endl;
        cout << "1. Production Worker" << endl;
        cout << "2. Shift Supervisor" << endl;
        cout << "3. Team Leader" << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

    //If the user enters an invalid choice, display an error message and prompt the user to enter their choice again.
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }
    //If the user selects option 4 to exit the program, display a message indicating that the program is ending and break out of the loop.
        if (choice == 4) {
            cout << "Ending Program" << endl;
            break;
        }
        //If the user enters a valid choice, prompt the user to enter the employee's information and store their input in the appropriate variables. If the user enters valid information, create an object of the selected employee type and display the employee's information that the user entered.
        bool validInput = false;
        while (!validInput) {
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
                    cout << endl;

                    ProductionWorker ProductionWorker1(name, employeeNumber, hireDate, shift, hourlyPayRate);
                    ProductionWorker1.printProductionWorker();
                    cout << endl;

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
                    cout << endl;

                    ShiftSupervisor ShiftSupervisor1(name, employeeNumber, hireDate, annualSalary, annualProductionBonus);
                    ShiftSupervisor1.printShiftSupervisor();
                    cout << endl;
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
                    cout << endl;
                      
                    TeamLeader TeamLeader1(name, employeeNumber, hireDate, shift, hourlyPayRate, monthlyBonus, requiredTrainingHours, attendedTrainingHours);
                    TeamLeader1.printTeamLeader();
                    cout << endl;
                  }

               }
    //If the user enters an invalid employee number, shift, or hourly pay rate, display an error message and prompt the user to enter the employee's information again.
                 catch (InvalidEmployeeNumber) {
                    cout << "Invalid Employee Number. Employee number must be between 0 and 9999. Please enter the employee's information again." << endl;
                    cout << endl;
                }
                catch (InvalidShift) {
                    cout << "Invalid Shift. Shift must be 1 for day shift or 2 for night shift. Please enter the employee's information again." << endl;
                    cout << endl;
                }
                catch (InvalidHourlyPayRate) {
                    cout << "Invalid Hourly Pay Rate. Hourly pay rate cannot be negative. Please enter the employee's information again." << endl;
                    cout << endl;

                }


               }
            
        }

      

       return 0;
    };



