#pragma once
#ifndef leetcode70_
#define leetcode70_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	int climbStairs(int n) {
		vector<int> ans;
		ans.push_back(1);
		ans.push_back(2);
		for (int i = 2; i < n; i++)
		{
			ans.push_back(ans[i - 1] + ans[i - 2]);
		}
		return ans[n-1];
	}
};




#endif




