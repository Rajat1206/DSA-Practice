/*
https://leetcode.com/problems/longest-consecutive-sequence

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

https://takeuforward.org/data-structure/longest-consecutive-sequence-in-an-array/

Time Complexity:
O(N) for putting all the elements into the set data structure.
After that for every starting element, we are finding the consecutive elements.
Though we are using nested loops, the set will be traversed at most twice in the worst case. 
So, the time complexity is O(2*N) instead of O(N^2).
*/

class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    int n = nums.size();

    unordered_set<int> nums_set;

    for (int i = 0; i < n; i++) {
      nums_set.insert(nums[i]);
    }

    int consec = 0;
    int max_consec = 0;

    for (int i = 0; i < n; i++) {
      if (nums_set.find(nums[i]-1) == nums_set.end()) {
        int curr = nums[i];
        int consec = 1;

        while (nums_set.find(curr+1) != nums_set.end()) {
          curr += 1;
          consec += 1;
        }

        max_consec = max(max_consec, consec);
      }
    }

    return max_consec;
  }
};