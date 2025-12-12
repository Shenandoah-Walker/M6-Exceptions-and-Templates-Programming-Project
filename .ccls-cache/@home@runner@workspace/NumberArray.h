/*
Class purpose: This class allows the user to create an array of floating point numbers. The user can set the size of the array, set the value of an element in the array, get the value of an element in the array, find the minimum value in the array, find the maximum value in the array, and calculate the average of all the elements in the array.
*/

#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H
#include <iostream>
#include <iomanip>

using namespace std;

class NumberArray {

private:
  double *array;
  int size; 
  static const int MAX_SIZE = 10;
  static const int MIN_SIZE = 1;
  static const int DEFAULT_VALUE = 10000;

public:
  /*
  Constructor: NumberArray
  Purpose: This constructor initializes the array to the default size of 10. If the user specifies a size, the
  constructor will initialize the array to that size. If the user specifies a size that is less than 1 or greater
  than 10, the constructor will initialize the array to the default size of 10.
  Parameters:
   - int size: The size of the array. The default value is 10.
  Returns: None
  Preconditions: None
  Postconditions: The array is initialized to the specified size or the default size of 10.
  */
  NumberArray(int size = MAX_SIZE);

  /*
  Destructor: ~NumberArray
  Purpose: This destructor deletes the array.
  Parameters: None
  Returns: None
  Preconditions: The array has been initialized.
  Postconditions: The array is deleted.
  */
  ~NumberArray() {delete [] array; cout << "The destructor is running" << endl;};

  /*
  Member function: setNumber
  Purpose: This function sets the value of an element in the array.
  Parameters:
   - int index: The index of the element to set.
   - double value: The value to set the element to.
  Returns: None
  Preconditions: The array has been initialized.
  Postconditions: The element at the specified index is set to the specified value.
  */
  void setNumber(int index, double value);

  /*
  Member function: getNumber
  Purpose: This function gets the value of an element in the array.
  Parameters:
   - int index: The index of the element to get.
  Returns: The value of the element at the specified index.
  Preconditions: The array has been initialized.
  Postconditions: The value of the element at the specified index is returned.
  */
  int getNumber(int index);

  /*
  Member function: findMin
  Purpose: This function finds the minimum value in the array.
  Parameters: None
  Returns: The minimum value in the array.
  Preconditions: The array has been initialized.
  Postconditions: The minimum value in the array is returned.
  */
  double findMin();

  /*
  Member function: findMax
  Purpose: This function finds the maximum value in the array.
  Parameters: None
  Returns: The maximum value in the array.
  Preconditions: The array has been initialized.
  Postconditions: The maximum value in the array is returned.
  */
  double findMax();

  /*
  Member function: calcAverage
  Purpose: This function calculates the average of all the elements in the array.
  Parameters: None
  Returns: The average of all the elements in the array.
  Preconditions: The array has been initialized.
  Postconditions: The average of all the elements in the array is returned.
  */
  double calcAverage();

  /*
  Member function: printArray
  Purpose: This function prints the array.
  Parameters: None
  Returns: None
  Preconditions: The array has been initialized.
  Postconditions: The array is printed to the console.
  */
  void printArray();

};

#endif