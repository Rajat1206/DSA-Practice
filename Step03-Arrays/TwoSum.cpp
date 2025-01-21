/*
https://leetcode.com/problems/two-sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*/

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> res;

    map<int, int> rem_map;

    for (int i = 0; i < nums.size(); i++) {
      int rem = target - nums[i];

      if (rem_map.find(rem) != rem_map.end()) {
        res.push_back(rem_map[rem]);
        res.push_back(i);
        return res;
      }

      else {
        if (rem_map.find(rem) == rem_map.end()) {
          rem_map[nums[i]] = i;
        }
      }
    }
    return res;
  }
};