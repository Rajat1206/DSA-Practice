/*
https://leetcode.com/problems/majority-element/

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.

Uses Boyer-Moore Majority Voting algorithm: https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm
*/

class Solution {
public:
  int majorityElement(vector<int>& nums) {
    int votes = 0, candidate = -1;

    for (int i = 0; i < nums.size(); i++) {
      if (votes == 0) {
        candidate = nums[i];
        votes = 1;
      }
      else {
        if (nums[i] == candidate) votes++;
        else votes--;
      }
    }

    int count = 0;
    if (votes >= 1) {
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == candidate) count++;
      }
      if (count > nums.size()/2)
        return candidate;
      else
        return INT_MIN;
    }
    else return INT_MIN;
  }
};