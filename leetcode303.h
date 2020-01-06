#pragma once
#ifndef leetcode299_
#define leetcode299_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>
#include <map>
#include<unordered_set>
#include <sstream>

using namespace std;


class NumArray {
public:
	vector<int> sum;
	NumArray(vector<int>& nums) {
		if (!nums.empty())
		{
			sum.push_back(nums[0]);
			for (int i = 1; i < nums.size(); i++)
			{   //¶¯Ì¬¹æ»®
				sum.push_back(sum[i - 1] + nums[i]);
			}
		}
		
	}

	int sumRange(int i, int j) {
		if (i == 0)
			return sum[j];
		else
		   return sum[j] - sum[i - 1];

	}
};



#endif
