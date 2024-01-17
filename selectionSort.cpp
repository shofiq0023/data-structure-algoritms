#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

void selectionSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;

    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }

    int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
  }
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);

  selectionSort(data, size);

  cout << "Sorted array: ";
  printArray(data, size);

  return 0;
}
