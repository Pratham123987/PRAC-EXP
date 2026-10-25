#include <iostream>
using namespace std;
int step = 1;
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int low, int high, int n) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    int pivotIndex = i + 1;
    cout << "Step " << step++ << ":" << endl;
    cout << "  Sub-array range : [" << low << " to " << high << "]" << endl;
    cout << "  Chosen Pivot    : " << pivot << endl;
    cout << "  Pivot placed at : Index " << pivotIndex << endl;
    cout << "  Current Array   : ";
    printArray(arr, n);
    cout << "-----------------------------------" << endl;
    return pivotIndex;
}
void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high, n);
        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nInitial Array: ";
    printArray(arr, n);
    cout << "-----------------------------------\n";
    quickSort(arr, 0, n - 1, n);
    cout << "Final Sorted Array: ";
    printArray(arr, n);
    return 0;
}
