#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    // Merge arrays until one of them is exhausted
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Copy the remaining elements of arr1, if any
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Copy the remaining elements of arr2, if any
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];

    cout << "Enter " << size1 << " elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];

    cout << "Enter " << size2 << " elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArray);

    cout << "Merged array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
