/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
*/

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int curr_buy = INT_MAX, curr_sell = INT_MIN;

    int curr_profit = 0;
    int max_profit = 0;

    for (int i = 0; i < prices.size(); i++) {
      if (prices[i] < curr_buy) {
        curr_buy = prices[i];
        curr_sell = prices[i];
      }
      if (prices[i] > curr_sell) {
        curr_sell = prices[i];
      }

      curr_profit = curr_sell - curr_buy;

      max_profit = max(max_profit, curr_profit);
    }

    return max_profit;
  }
};

// Alternate
/*
class Solution {
public:
  int maxProfit(std::vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] < buy) {
        buy = prices[i];
      } else if (prices[i] - buy > profit) {
        profit = prices[i] - buy;
      }
    }
    return profit;
  }
};
*/