class Solution {
public:
  // Function to sort an array using quick sort algorithm.
  void quickSort(vector<int> &arr, int low, int high) {
    if (low >= high)
      return;

    int part = partition(arr, low, high);

    quickSort(arr, low, part - 1);
    quickSort(arr, part + 1, high);
  }

public:
  // Function that takes last element as pivot, places the pivot element at
  // its correct position in sorted array, and places all smaller elements
  // to left of pivot and all greater elements to right of pivot.
  int partition(vector<int> &arr, int low, int high) {
    int pivot = high;

    int l = low, h = high;

    while (l < h) {
      while (arr[l] <= arr[pivot] && l < high) {
        l++;
      }

      while (arr[h] >= arr[pivot] && h > low) {
        h--;
      }

      if (l < h)
        swap(arr[l], arr[h]);
    }

    swap(arr[l], arr[pivot]);

    return l;
  }
};