#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void selectionSort(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
      for (int j = i; j < arr.size(); j++) {
        if (arr[i] > arr[j])
          swap(arr[i], arr[j]);
      }
    }
  }
};