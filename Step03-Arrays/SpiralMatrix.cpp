/*
https://leetcode.com/problems/spiral-matrix

Given an m x n matrix, return all elements of the matrix in spiral order.
*/

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> result;

    int top = 0, bottom = m-1, left = 0, right = n-1;

    while (top <= bottom && left <= right) {
      for (int i = left; i <= right; i++) {
        result.push_back(matrix[top][i]);
      }
      top += 1;

      for (int i = top; i <= bottom; i++) {
        result.push_back(matrix[i][right]);
      }
      right -= 1;

      if (top <= bottom) {
        for (int i = right; i >= left; i--) {
          result.push_back(matrix[bottom][i]);
        }
        bottom -= 1;
      }

      if (left <= right) {
        for (int i = bottom; i >= top; i--) {
          result.push_back(matrix[i][left]);
        }
        left += 1;
      }
    }

    return result;
  }
};