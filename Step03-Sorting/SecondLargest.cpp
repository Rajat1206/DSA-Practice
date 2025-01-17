class Solution {
public:
  // Function returns the second
  // largest elements
  int getSecondLargest(vector<int> &arr) {
    // Code Here
    int first = -1;
    int second = -1;

    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] > first) {
        second = first;
        first = arr[i];
      }

      if (arr[i] > second && arr[i] != first) {
        second = arr[i];
      }
    }

    return second;
  }
};