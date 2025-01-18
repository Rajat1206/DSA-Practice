class Solution {
public:
  vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    int prev = NULL;
    vector<int> res = {};
    
    while (i < a.size() && j < b.size()) {
      if (a[i] < b[j]) {
        if (a[i] != prev) {
          res.push_back(a[i]);
          prev = a[i];
        }
        i++;
      }

      else if (a[i] > b[j]) {
        if (b[j] != prev) {
          res.push_back(b[j]);
          prev = b[j];
        }
        j++;
      }
      
      else {
        if (a[i] != prev) {
          res.push_back(a[i]);
          prev = a[i];
        }
        i++;
        j++;
      }
    }
    
    while (i < a.size()) {
      if (a[i] != prev) {
        res.push_back(a[i]);
        prev = a[i];
      }
      i++;
    }
    
    while (j < b.size()) {
      if (b[j] != prev) {
        res.push_back(b[j]);
        prev = b[j];
      }
      j++;
    }
    
    return res;
  }
};