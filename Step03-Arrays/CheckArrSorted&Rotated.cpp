class Solution {
public:
  bool check(vector<int> &nums) {
    if (nums.size() == 0 || nums.size() == 1)
      return true;

    int cmp = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] <= nums[(i + 1) % nums.size()]) {
        cmp++;
      }
    }

    if (cmp >= nums.size() - 1)
      return true;
    else
      return false;
  }
};