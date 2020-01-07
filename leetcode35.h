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
		int left = 0;
		int right = len;

		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (nums[mid] < target) {
				left = mid + 1;
			}
			else {
				right = mid;
			}
		}
		return left;

	}
};






#endif