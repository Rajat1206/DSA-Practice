/*
The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.
*/

#include <bits/stdc++.h>

// Sliding Window approach
// Will find the maximum possible window till current index
// If window can't be increased, it will continue to increase left and right to maintain the gap at each iter
// until window can be increased by increasing right
class Solution {
public:
  int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0;
    long curr = 0;
    
    for (int right = 0; right < nums.size(); right++) {
      long target = nums[right];
      curr += target;
      
      if ((right - left + 1) * target - curr > k) {
        curr -= nums[left];
        left++;
      }
    }
    
    return nums.size() - left;
  }
};