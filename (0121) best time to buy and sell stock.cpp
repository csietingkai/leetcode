class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int max_profit = 0;
		for (int buy_index = 0; buy_index < prices.size(); buy_index++) {
			for (int sell_index = buy_index+1; sell_index < prices.size(); sell_index++) {
				int current_profit = prices[sell_index]-prices[buy_index];
				if (current_profit > max_profit) {
					max_profit = current_profit;
				}
			}
		}
		return max_profit;
	}
};

