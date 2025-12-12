#include <iostream>
#include <iomanip>
#include "NumberArray.h"

using namespace std;

NumberArray::NumberArray(int arraySize) {
  size = arraySize;
  array = new double[size];
  for (int i = 0; i < size; i++) {
    array[i] = 0.0;
  }
}


void NumberArray::setNumber(int index, double value) {
  if (index < 0 || index >= size) {
  cout << "The index is out of the bounds of the array, number not stored." << endl; 
  }
  else{
    array[index] = value;
    }
}

int NumberArray::getNumber(int index) {
  if (index < 0 || index >= size) {
    cout << "Error: Index out of bounds. This function will now return 10000." << endl;
    return DEFAULT_VALUE;
  }
  return array[index];

}

double NumberArray::findMin() {
  double min = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

double NumberArray::findMax() {
  double max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

double NumberArray::calcAverage() {
  double sum = 0.0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return sum / size;
}

void NumberArray::printArray() {
  cout << fixed << setprecision(1);
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}