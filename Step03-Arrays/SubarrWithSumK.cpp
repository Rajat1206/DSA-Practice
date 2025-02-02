/*
https://leetcode.com/problems/subarray-sum-equals-k/

Given an array of integers nums and an integer k,
return the total number of subarrays whose sum equals to k.
*/

class Solution {
public:
  int subarraySum(vector<int>& nums, int k) {
    int result = 0;
    
    map<int, int> preSum;
    
    int sum = 0;

    preSum[0] = 1;

    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];

      int rem = sum - k;

      result += preSum[rem];

      preSum[sum] += 1;
    }

    return result;
  }
};