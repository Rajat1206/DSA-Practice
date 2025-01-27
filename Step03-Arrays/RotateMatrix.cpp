/*
https://leetcode.com/problems/rotate-image

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
*/

class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    int n = matrix.size();

    // transpose the matrix
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        swap(matrix[i][j], matrix[j][i]);
      }
    }

    // reverse the rows
    for (int i = 0; i < n; i++) {
      reverse(matrix[i].begin(), matrix[i].end());
    }
  }
};