#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void insertionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;

    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }

    arr[j + 1] = key;
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

  insertionSort(data, size);

  cout << "Sorted Array: ";
  printArr(data, size);
}