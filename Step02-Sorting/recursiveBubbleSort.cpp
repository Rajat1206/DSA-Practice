class Solution {
public:
  void recursiveBubbleSort(vector<int> &arr, int n) {
    if (n == 1)
      return;

    int didSwap = 0;

    for (int j = 0; j < n - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        didSwap = 1;
      }
    }

    if (didSwap == 0)
      return;

    recursiveBubbleSort(arr, n - 1);
  }
};
