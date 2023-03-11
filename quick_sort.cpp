#include <iostream>
#include <algorithm>
using namespace std;

int partition_lomuto(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

void quick_sort_lomuto(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition_lomuto(arr, low, high);
        quick_sort_lomuto(arr, low, pi - 1);
        quick_sort_lomuto(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 80, 20, 30, 40, 40, 70,90,10,20,30,40,70,20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = lomutoPartition(arr, 0, n - 1);

    cout << "Pivot index: " << pivotIndex << endl;
    cout << "Array after partitioning: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}