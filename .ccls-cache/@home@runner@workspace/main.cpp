//NumberArray Class Template

//This is the test program for the NumberArray class.


#include <iostream>
#include <iomanip>
#include <random>
#include "NumberArray.h"

using namespace std;

int main() {

  random_device engine;
  uniform_real_distribution<double> dist(0.0, 100.0);

  //Test constructors
  cout << "----- Test constructors -----" << endl;

  //Test default int constructor
  cout << "From default constructor: Array of size 10" << endl;
  NumberArray<int> DefaultIntArray;
  DefaultIntArray.printArray();
  cout << endl;

  //Test default double constructor
  cout << "From default constructor: Array of size 10" << endl;
  NumberArray<double> DefaultDoubleArray;
  DefaultDoubleArray.printArray();
  cout << endl;


  //Test constructor with parameters
    
  //Test int constructor
  cout << "From constructor with parameters: Integer array of size 15" << endl;
  NumberArray<int> ParameterIntArray(15);
  for (int i = 0; i < 15; i++) {
    ParameterIntArray.setNumber(i, dist(engine));
  }
  ParameterIntArray.printArray();
  cout << endl;

  //Test double constructor
  cout << "From constructor with parameters: Double array of size 15" << endl;
  NumberArray<double> ParameterDoubleArray(15);
  for (int i = 0; i < 15; i++) {
    ParameterDoubleArray.setNumber(i, dist(engine));
  }
  ParameterDoubleArray.printArray();
  cout << endl;

  //Test mutator
  cout << "----- Test mutator -----" << endl;
  cout << endl;
    
  //Test int mutator
  cout << "Integer array filled with numbers:" << endl;
  for (int i = 0; i < 15; i++) {
    ParameterIntArray.setNumber(i, dist(engine));
  }
  ParameterIntArray.printArray();
  cout << endl;

  //Test double mutator
  cout << "Double array filled with numbers:" << endl;
  for (int i = 0; i < 15; i++) {
    ParameterDoubleArray.setNumber(i, dist(engine));
  }
  ParameterDoubleArray.printArray();
  cout << endl;

  //Test out of bounds mutator
  cout << "Trying to set a number with an out of bounds index (20):" << endl;
    try {
        ParameterIntArray.setNumber(20, 25);
        } catch (const out_of_range& e) {
            cout << "Integer Array... " << endl;
            cout << e.what() << endl;
            cout << endl;
        }
    try {
        ParameterDoubleArray.setNumber(20, 25.0);
        } catch (const out_of_range& e) {
            cout << "Double Array... " << endl;
            cout << e.what() << endl;
            cout << endl;
        }

  //Test accessors
  cout << "----- Test accessors -----" << endl;
  cout << endl;
  //Test int accessor for getNumber
  try{
  cout << "Access integer at index 5: " << ParameterIntArray.getNumber(5) << endl;
  } catch (const out_of_range& e) {
            cout << "Integer Array... " << endl;
            cout << e.what() << endl;
            cout << endl;
        }

  //Test double accessor for getNumber
  try {
    cout << "Access double item at index 5: " << ParameterDoubleArray.getNumber(5) << endl;
  } catch (const out_of_range& e) {
    cout << "Double array ... " << e.what() << endl;
    cout << endl;
  }

  cout << "Trying to access a number with an out of bounds index (20):" << endl;
  try {
      cout << ParameterIntArray.getNumber(20) << endl;
      cout << endl;
  } catch (const out_of_range& e) {
      cout << "Integer array ... " << e.what() << endl;
      cout << endl;
  }
  try {
      cout << ParameterDoubleArray.getNumber(20) << endl;
      cout << endl;
  } catch (const out_of_range& e) {
      cout << "Double array ... " << e.what() << endl;
      cout << endl;
  }
  
  cout << "The minimum value in the integer array is: " << ParameterIntArray.findMin() << endl;
  cout << "The maximum value in the integer array is: " << ParameterIntArray.findMax() << endl;
  cout << "The average of the values in the integer array is: " << ParameterIntArray.calcAverage() << endl;
  cout << endl;

  cout << "The minimum value in the double array is: " << ParameterDoubleArray.findMin() << endl;
  cout << "The maximum value in the double array is: " << ParameterDoubleArray.findMax() << endl;
  cout << "The average of the values in the double array is: " << ParameterDoubleArray.calcAverage() << endl;
  cout << endl;

  cout << "----- Print arrays -----" << endl;
  cout << endl;
  cout << "Integer array:" << endl;
  ParameterIntArray.printArray();
  cout << endl;
  cout << "Double array:" << endl;
  ParameterDoubleArray.printArray();
  cout << endl;

  cout << "----- Test destructor -----" << endl;
  cout << endl;
  cout << "Exiting program, destructor will be called to free memory." << endl;

  return 0;
}