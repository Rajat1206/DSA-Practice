/*
https://leetcode.com/problems/set-matrix-zeroes

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
*/

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    unordered_set<int> zero_row;
    unordered_set<int> zero_col;

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (matrix[i][j] == 0) {
          zero_row.insert(i);
          zero_col.insert(j);
        }
      }
    }

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (matrix[i][j] != 0) {
          if (zero_row.find(i) != zero_row.end())
            matrix[i][j] = 0;
            
          if (zero_col.find(j) != zero_col.end())
            matrix[i][j] = 0;
        }
      }
    }
  }
};