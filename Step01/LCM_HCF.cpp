/*
Find LCM and HCF of two numbers
*/

class Solution {
public:
  vector<int> lcmAndGcd(int a, int b) {
    vector<int> res = {};
    
    int dividend = (a > b) ? a : b;
    int divisor = (a < b) ? a : b;
    
    int rem = 0;
    
    while (dividend % divisor != 0) {
      rem = dividend % divisor;
      dividend = divisor;
      divisor = rem;
    }
    
    res.insert(res.begin(), divisor);
    res.insert(res.begin(), (a * b) / divisor);
    
    return res;
  }
};