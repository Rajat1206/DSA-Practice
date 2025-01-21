/*
https://leetcode.com/problems/sort-colors

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
*/

class Solution {
public:
  void sortColors(vector<int>& nums) {
    int l = 0, m = 0, h = nums.size()-1;

    while (m <= h) {
      if (nums[m] == 0) {
        swap(nums[l], nums[m]);
        l++;
        m++;
      }
      else if (nums[m] == 1) {
        m++;
      }
      else if (nums[m] == 2) {
        swap(nums[m], nums[h]);
        h--;
      }
    }
  }
};