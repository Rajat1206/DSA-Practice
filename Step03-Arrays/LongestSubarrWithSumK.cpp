/*
https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809

Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.
*/

class Solution {
public:
  int longestSubarray(vector<int>& arr, int k) {
    map<int, int> arr_sum;
    
    int max_size = 0;
    
    int sum = 0;
    
    for (int i = 0; i < arr.size(); i++) {
      sum += arr[i];
      
      if (sum == k) {
        max_size = max(max_size, i+1);
      }
      
      if (arr_sum.find(sum-k) != arr_sum.end()) {
        max_size = max(max_size, i-arr_sum[sum-k]);
      }
      
      if (arr_sum.find(sum) == arr_sum.end()) {
        arr_sum[sum] = i;
      }
      
    }
    
    return max_size;
  }
};