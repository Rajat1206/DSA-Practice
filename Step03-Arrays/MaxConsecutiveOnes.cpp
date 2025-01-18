class Solution {
public:
  int findMaxConsecutiveOnes(vector<int> &nums) {
    int max_count = 0;

    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0)
        count = 0;
      if (nums[i] == 1) {
        count++;
        max_count = max(max_count, count);
      }
    }

    return max_count;
  }
};