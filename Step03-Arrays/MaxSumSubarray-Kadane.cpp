/*
https://leetcode.com/problems/maximum-subarray

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Kadane's Algorithm: https://en.wikipedia.org/wiki/Maximum_subarray_problem
*/

class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
      curr_sum = max(nums[i], curr_sum + nums[i]);
      max_sum = max(curr_sum, max_sum);
    }

    return max_sum;
  }
};

// Alteration to print the maximum subarray also
/*
class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int curr_sum = 0;
    int max_sum = INT_MIN;

    int curr_start_idx = -1, curr_end_idx = -1;
    int max_start_idx = -1, max_end_idx = -1;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] + curr_sum > nums[i]) {
        curr_sum = curr_sum + nums[i];
        curr_end_idx = i;
      }
      else {
        curr_sum = nums[i];
        curr_start_idx = i;
        curr_end_idx = i;
      }
      
      if (max_sum < curr_sum) {
        max_sum = curr_sum;
        max_start_idx = curr_start_idx;
        max_end_idx = curr_end_idx;
      }
    }

    for (int i = max_start_idx; i <= max_end_idx; i++) {
      cout << nums[i] << " ";
    }
    cout << endl;

    return max_sum;
  }
};
*/