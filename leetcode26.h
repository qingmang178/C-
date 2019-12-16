#pragma once
#ifndef leetcode26_
#define leetcode26_

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int len = nums.size();
		if (len == 0)
			return 0;
		int i = 0;
		for (int j = 1; j < len; j++)
		{
			if (nums[i] != nums[j])
			{
				i++;
				nums[i] = nums[j];
			}
		}
		return i + 1;

	}
};






#endif

