#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee {
    private:
        int shift;
        double hourlyPayRate;

    public:

        /*
        Constructor: ProductionWorker
        Purpose: To create a ProductionWorker object and initialize the data members to default values.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: A ProductionWorker object is created with default values.
        */
        ProductionWorker();

        /*
        Constructor: ProductionWorker
        Purpose: To create a ProductionWorker object and initialize the data members to the values passed in.
        Parameters:
        - string name
        - int employeeNumber
        - string hireDate
        - int shift
        - double hourlyPayRate
        Returns: None
        Preconditions: None
        Postconditions: A ProductionWorker object is created with the values passed in.
        */
        ProductionWorker(string name, int employeeNumber, string hireDate, int shift, double hourlyPayRate);

        /*
        Accessor: getShift
        Purpose: To return the shift of the ProductionWorker.
        Parameters: None
        Returns: int
        Preconditions: None
        Postconditions: The shift of the ProductionWorker is returned.
        */
        int getShift() const;

        /*
        Accessor: getHourlyPayRate
        Purpose: To return the hourly pay rate of the ProductionWorker.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The hourly pay rate of the ProductionWorker is returned.
        */
        double getHourlyPayRate() const;

        /*
        Mutator: setShift
        Purpose: To set the shift of the ProductionWorker.
        Parameters:
        - int shift
        Returns: None
        Preconditions: None
        Postconditions: The shift of the ProductionWorker is set.
        */
        void setShift(int shift);

        /*
        Mutator: setHourlyPayRate
        Purpose: To set the hourly pay rate of the ProductionWorker.
        Parameters:
        - double hourlyPayRate
        Returns: None
        Preconditions: None
        Postconditions: The hourly pay rate of the ProductionWorker is set.
        */
        void setHourlyPayRate(double hourlyPayRate);

        /*
        Function: printProductionWorker
        Purpose: To print a production worker's information.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: The production worker's information is printed.
        */
        void printProductionWorker();
};


#endif