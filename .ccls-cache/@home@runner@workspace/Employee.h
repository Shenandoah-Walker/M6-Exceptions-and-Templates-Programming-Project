#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee {

private:
    string name;
    int employeeNumber;
    string hireDate;

public:

    /*
    Constructor: Employee
    Purpose: To create an Employee object and initialize the data members to default values.
    Parameters: None
    Returns: None
    Preconditions: None
    Postconditions: An Employee object is created with default values.
    */
    Employee();

    /*
    Constructor: Employee
    Purpose: To create an Employee object and initialize the data members to the values passed in.
    Parameters:
      - string name
      - int employeeNumber
      - string hireDate
    Returns: None
    Preconditions: None
    Postconditions: An Employee object is created with the values passed in.
    */
    Employee(string name, int employeeNumber , string hireDate);

    /*
    Accessor: getName
    Purpose: To return the name of the employee.
    Parameters: None
    Returns: string
    Preconditions: None
    Postconditions: The name of the employee is returned.
    */
    string getName() const;

    /*
    Accessor: getEmployeeNumber
    Purpose: To return the employee number of the employee.
    Parameters: None
    Returns: int
    Preconditions: None
    Postconditions: The employee number of the employee is returned.
    */
    int getEmployeeNumber() const;

    /*
    Accessor: getHireDate
    Purpose: To return the hire date of the employee.
    Parameters: None
    Returns: string
    Preconditions: None
    Postconditions: The hire date of the employee is returned.
    */
    string getHireDate() const;

    /*
    Mutator: setName
    Purpose: To set the name of the employee.
    Parameters:
     - string name
    Returns: None
    Preconditions: None
    Postconditions: The name of the employee is set.
    */
    void setName(string name);

    /*
    Mutator: setEmployeeNumber
    Purpose: To set the employee number of the employee.
    Parameters:
     - int employeeNumber
    Returns: None
    Preconditions: None
    Postconditions: The employee number of the employee is set.
    */
    void setEmployeeNumber(int employeeNumber);

    /*
    Mutator: setHireDate
    Purpose: To set the hire date of the employee.
    Parameters:
     - string hireDate
    Returns: None
    Preconditions: None
    Postconditions: The hire date of the employee is set.
    */
    void setHireDate(string hireDate);

    /*
    Function: printEmployee
    Purpose: To print an employee's information.
    Parameters: None
    Returns: None
    Preconditions: None
    Postconditions: The employee's information is printed.
    */
    void printEmployee();
};




#endif