/*
Given a positive integer n, The task is to find the value of Σ_iF(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.
*/

class Solution {
public:
  int sumOfDivisors(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
      sum += i * (n / i);
    }

    return sum;
  }
};