// One solution is to reverse the array
// And then reverse the subarrs from 0 to k and k+1 to n;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    if (k == 0 || k % nums.size() == 0 || nums.size() == 1)
      return;

    int cycles = gcd(nums.size(), k);

    for (int cycle = 0; cycle < cycles; cycle++) {
      int curr_idx = cycle;
      int next_idx;
      int curr_mem = nums[curr_idx];
      int next_mem;

      for (int _ = 0; _ < nums.size() / cycles; _++) {
        cout << curr_idx << endl;
        next_idx = (curr_idx + k) % nums.size();
        next_mem = nums[next_idx];
        nums[next_idx] = curr_mem;

        curr_idx = next_idx;
        curr_mem = next_mem;
      }
    }
  }
};