/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
*/

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    if (nums.size() <= 1)
      return;

    int non_zero_idx = -1;
    int curr_idx = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        swap(nums[non_zero_idx + 1], nums[i]);
        non_zero_idx++;
      }
    }
  }
};