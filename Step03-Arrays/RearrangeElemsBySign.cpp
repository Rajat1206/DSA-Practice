/*
https://leetcode.com/problems/rearrange-array-elements-by-sign/

You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
You should return the array of nums such that the the array follows the given conditions:
1. Every consecutive pair of integers have opposite signs.
2. For all integers with the same sign, the order in which they were present in nums is preserved.
3. The rearranged array begins with a positive integer.

IMP: Solution not possible with O(1) space complexity.
*/

class Solution {
public:
  vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> res(nums.size(), NULL);
    int pos_idx = 0, neg_idx = 1;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        res[pos_idx] = nums[i];
        pos_idx += 2;
      }
      else {
        res[neg_idx] = nums[i];
        neg_idx += 2;
      }
    }

    return res;
  }
};