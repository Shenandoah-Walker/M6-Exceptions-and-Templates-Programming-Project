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

  //Test default constructor
  cout << "From default constructor: Array of size 10" << endl;
  NumberArray array1;
  array1.printArray();
  cout << endl;


  //Test constructor with parameters
  cout << "From constructor with parameters: Array of size 15" << endl;
  NumberArray array2(15);
  for (int i = 0; i < 15; i++) {
    array2.setNumber(i, dist(engine));
  }
  array2.printArray();
  cout << endl;

  //Test mutator
  cout << "----- Test mutator -----" << endl;
  cout << "Array filled with numbers:" << endl;
  for (int i = 0; i < 15; i++) {
    array2.setNumber(i, dist(engine));
  }
  array2.printArray();
  cout << endl;

  cout << "Trying to set a number with an out of bounds index (20):" << endl;
  array2.setNumber(20, 25.7);
  cout << endl;

  //Test accessors
  cout << "----- Test accessors _____" << endl;
  cout << "Access item at index 5: " << array2.getNumber(5) << endl;
  cout << "Access item at index 20 (out of bounds): " << array2.getNumber(20) << endl;
  cout << "The minimum value in the array is: " << array2.findMin() << endl;
  cout << "The maximum value in the array is: " << array2.findMax() << endl;
  cout << "The average of the values in the array is: " << array2.calcAverage() << endl;

  cout << endl;

}