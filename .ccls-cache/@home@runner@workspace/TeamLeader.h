#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"
#include <iostream>
#include <string>

using namespace std;

class TeamLeader : public ProductionWorker {
    private:
        double monthlyBonus;
        int requiredTrainingHours;
        int attendedTrainingHours;

    public:
        /*
        Constructor: TeamLeader
        Purpose: To create a TeamLeader object and initialize the data members to default values.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: A TeamLeader object is created with default values.
        */
        TeamLeader();

        /*
        Constructor: TeamLeader
        Purpose: To create a TeamLeader object and initialize the data members to the values passed in.
        Parameters:
        - string name
        - int employeeNumber
        - string hireDate
        - int shift
        - double hourlyPayRate
        - double monthlyBonus
        - int requiredTrainingHours
        - int attendedTrainingHours
        Returns: None
        Preconditions: None
        Postconditions: A TeamLeader object is created with the values passed in.
        */
        TeamLeader(string name, int employeeNumber, string hireDate, int shift, double hourlyPayRate, double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours);

        /*
        Accessor: getMonthlyBonus
        Purpose: To return the monthly bonus of the TeamLeader.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The monthly bonus of the TeamLeader is returned.
        */
        double getMonthlyBonus() const;

        /*
        Accessor: getRequiredTrainingHours
        Purpose: To return the required training hours of the TeamLeader.
        Parameters: None
        Returns: int
        Preconditions: None
        Postconditions: The required training hours of the TeamLeader is returned.
        */
        int getRequiredTrainingHours() const;

        /*
        Accessor: getAttendedTrainingHours
        Purpose: To return the attended training hours of the TeamLeader.
        Parameters: None
        Returns: int
        Preconditions: None
        Postconditions: The attended training hours of the TeamLeader is returned.  
        */
        int getAttendedTrainingHours() const;

        /*
        Mutator: setMonthlyBonus
        Purpose: To set the monthly bonus of the TeamLeader.
        Parameters:
        - double monthlyBonus
        Returns: None
        Preconditions: None
        Postconditions: The monthly bonus of the TeamLeader is set.
        */
        void setMonthlyBonus(double monthlyBonus);

        /*
        Mutator: setRequiredTrainingHours
        Purpose: To set the required training hours of the TeamLeader.
        Parameters:
        - int requiredTrainingHours
        Returns: None
        Preconditions: None
        Postconditions: The required training hours of the TeamLeader is set.
        */
        void setRequiredTrainingHours(int requiredTrainingHours);

        /*
        Mutator: setAttendedTrainingHours
        Purpose: To set the attended training hours of the TeamLeader.
        Parameters:
        - int attendedTrainingHours
        Returns: None
        Preconditions: None
        Postconditions: The attended training hours of the TeamLeader is set.
        */
        void setAttendedTrainingHours(int attendedTrainingHours);

        /*
        Function: printTeamLeader
        Purpose: To print a team leader's information.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: The team leader's information is printed.
        */
        void printTeamLeader();
};



#endif