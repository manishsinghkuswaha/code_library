// Bubble sort in C++

#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {

  
  for (int step = 0; step < (size-1); ++step) {
      
    
    for (int i = 0; i < size - (step-1); ++i) {

      
      if (array[i] > array[i + 1]) {

        
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
    int size;
    cin>>size;
  int data[size]; 
  for(int i=0; i<size; i++)
  {
      cin>>data[i];
  }
  bubbleSort(data, size);
  
  printArray(data, size);
}
