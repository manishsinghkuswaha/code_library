#include <iostream>
using namespace std;


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


int main() {
    int n;
    cin>>n;
  int arr[n]; 
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
  }
    insertionSort(arr , n);
  
  printArray(arr, n);
}
