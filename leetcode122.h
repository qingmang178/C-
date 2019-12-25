#pragma once
#ifndef leetcode122_
#define leetcode122_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>


using namespace std;


class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int max_profit = 0;
		int buy = INT_MAX;
		int sell = 0;
		int current = 0;
		int current_max = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] < buy || prices[i]<sell)
			{
				buy = prices[i];
				max_profit += current_max;
				current_max = 0;
				sell = 0;
			}
			else
			{
				sell = prices[i];
				current = sell - buy;
				current_max = max(current, current_max);
			}
		}
		return max_profit+current_max;
	}
};





#endif






