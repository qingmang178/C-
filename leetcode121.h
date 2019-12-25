#pragma once
#ifndef leetcode121_
#define leetcode121_


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
		int max_pro = 0;
		int buy = INT_MAX;
		int current = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] < buy)
			{
				buy = prices[i];
			}
			else {
				current = prices[i] - buy;
			}
			max_pro = max(current, max_pro);
		}
		return max_pro;
	}
};


#endif
