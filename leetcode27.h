#pragma once
#ifndef leetcode27_
#define leetcode27_

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int len = nums.size();
		if (len == 0)
			return 0;
		int i = 0;
		for (int j = 0; j < len; j++)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				i++;
			}
		}
		return i;
	}
};










#endif

