/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x < 10) return true;
    if (x % 10 == 0) return false;

    int x_copy = x;
    int x_half = 0;
    while (x_half < x_copy) {
      x_half = 10 * x_half + (x_copy % 10);
      x_copy = x_copy / 10;
    }

    if (x_half == x_copy || x_half / 10 == x_copy) return true;
    return false;
  }
};