#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

class ShiftSupervisor : public Employee {
    private:
        double annualSalary;
        double annualProductionBonus;

    public:

        /*
        Constructor: ShiftSupervisor
        Purpose: To create a ShiftSupervisor object and initialize the data members to default values.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: A ShiftSupervisor object is created with default values.
        */
        ShiftSupervisor();

        /*
        Constructor: ShiftSupervisor
        Purpose: To create a ShiftSupervisor object and initialize the data members to the values passed in.
        Parameters:
        - string name
        - int employeeNumber
        - string hireDate
        - double annualSalary
        - double annualProductionBonus
        Returns: None
        Preconditions: None
        Postconditions: A ShiftSupervisor object is created with the values passed in.
        */
        ShiftSupervisor(string name, int employeeNumber, string hireDate, double annualSalary, double annualProductionBonus);

        /*
        Accessor: getAnnualSalary
        Purpose: To return the annual salary of a shift supervisor.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The annual salary of a shift supervisor is returned.
        */
        double getAnnualSalary() const;

        /*
        Accessor: getAnnualProductionBonus
        Purpose: To return the annual production bonus of a shift supervisor.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The annual production bonus of a shift supervisor is returned.
        */
        double getAnnualProductionBonus() const;

        /*
        Mutator: setAnnualSalary
        Purpose: To set the annual salary of a shift supervisor.
        Parameters:
        - double annualSalary
        Returns: None
        Preconditions: None
        Postconditions: The annual salary of the shift supervisor is set.
        */
        void setAnnualSalary(double annualSalary);

        /*
        Mutator: setAnnualProductionBonus
        Purpose: To set the annual production bonus of a shift supervisor.
        Parameters:
        - double annualProductionBonus
        Returns: None
        Preconditions: None
        Postconditions: The annual production bonus of a shift supervisor is set.
        */
        void setAnnualProductionBonus(double annualProductionBonus);

        /*
        Function: printShiftSupervisor
        Purpose: To print a shift supervisor's information.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: The shift supervisor's information is printed.
        */
        void printShiftSupervisor();
};

#endif