#include <iostream>
using namespace std;

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "  " << array[i];
  }
}

void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
	int size;
	cout << "Enter array size: ";
	cin >> size;

  int data[size] = {};

	cout << "Enter array elements" << endl;
	for (int i = 0; i < size; i++) {
		cin >> data[i];
	}
  
  bubbleSort(data, size);
  
  cout << "Bubble sorted array: ";  
  printArray(data, size);
}