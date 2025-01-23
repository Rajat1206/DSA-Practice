/*
https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620

You are given an array arr of positive integers.
Your task is to find all the leaders in the array.
An element is considered a leader if it is greater than or equal to all elements to its right.
The rightmost element is always a leader.
*/

class Solution {
public:
  vector<int> leaders(vector<int> &arr) {
    // Code here
    vector<int> res;

    int prev_largest = INT_MIN;

    for (int i = arr.size() - 1; i >= 0; i--) {
      if (arr[i] >= prev_largest) {
        res.insert(res.begin(), arr[i]);
        prev_largest = max(prev_largest, arr[i]);
      }
    }

    return res;
  }
};