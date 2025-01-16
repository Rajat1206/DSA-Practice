class Solution {
public:
  void recursiveInsertionSort(vector<int> &arr, int i, int n) {
    if (i == n)
      return;

    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    // beacuse we decreased the required
    // value of j by 1 in the while loop
    arr[j + 1] = key;

    recursiveInsertionSort(arr, i + 1, n);
  }
}