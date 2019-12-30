#pragma once
#ifndef leetcode198_
#define leetcode198_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>
#include <map>
#include<unordered_set>

using namespace std;


class Solution {
public:
	int rob(vector<int>& nums) {
		int pre = 0;
		int current = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			int temp = max(current, pre + nums[i]);
			pre = current;
			current = temp;

		}
		return current;
	}
};





#endif

