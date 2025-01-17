class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    if (nums.size() == 0)
      return 0;
    if (nums.size() == 1)
      return 1;

    int uniq_idx = 0;
    int curr_idx = 0;

    int size = nums.size();
    int swaps = 0;

    for (curr_idx = 1; curr_idx < size; curr_idx++) {
      if (nums[uniq_idx] != nums[curr_idx]) {
        uniq_idx++;
        nums[uniq_idx] = nums[curr_idx];
      }
    }

    return uniq_idx + 1;
  }
};