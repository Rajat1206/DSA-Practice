/*
https://leetcode.com/problems/next-permutation

Given an array of integers nums, find the next permutation of nums.

https://takeuforward.org/data-structure/next_permutation-find-next-lexicographically-greater-permutation/

1. Find the first index i from the back of the given array where arr[i] becomes smaller than arr[i+1].
2a. If such a break-point does not exist i.e. if the array is sorted in decreasing order
2b. If a break-point exists:
  i. Find the smallest number > arr[i] in the right of i and swap it with arr[i].
  ii. Reverse array from i+1 to n.
*/

class Solution {
public:
  void nextPermutation(vector<int>& nums) {
    int idx = nums.size()-1;
    
    int div = -1;
    while (idx >= 1 && div == -1) {
      if (nums[idx] > nums[idx-1])
        div = idx-1;
      idx--;
    }

    if (div == -1) {
      reverse(nums.begin(), nums.end());
      return;
    }
    else {
      for (int i = nums.size()-1; i > div; i--) {
        if (nums[i] > nums[div]) {
          swap(nums[i], nums[div]);
          break;
        }
      }
      reverse(nums.begin()+div+1, nums.end());
    }
  }
};