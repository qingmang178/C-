#pragma once
#ifndef leetcode53_
#define leetcode53_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = 0;
		int maxsum = nums[0];
		for (int i = 0; i < nums.size(); i++)
		{
			if (sum > 0)
			{
				sum = sum + nums[i];
			}
			else
			{
				sum = nums[i];  //¹Ø¼ü
			}
			maxsum = max(maxsum, sum);
		}
		return maxsum;
	}
};




#endif


