#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void insertionSort(vector<int> &arr) {
    for (int i = 1; i < arr.size(); i++) {
      int key = arr[i];
      int j = i - 1;

      while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
      }

      // beacuse we decreased the required
      // value of j by 1 in the while loop
      arr[j + 1] = key;
    }
  }
};