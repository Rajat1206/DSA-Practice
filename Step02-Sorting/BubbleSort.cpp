#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void bubbleSort(vector<int> &arr) {
    for (int i = arr.size() - 1; i > 0; i--) {
      for (int j = 0; j < i; j++) {
        if (arr[j] > arr[j + 1]) {
          swap(arr[j], arr[j + 1]);
        }
      }
    }
  }
};