#pragma once

#ifndef leetcode35_
#define leetcode35_

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int len = nums.size();
		if (len == 0)
			return 0;
		int i;
		if (nums[0] < target)
			return 0;
		for (i = 0; i < len; i++)
		{
			if (nums[i] <= target)
				continue;
			else
				break;

		}
		if (nums[i-1] == target)
			return i-1;
		else
			return i;


	}
};






#endif