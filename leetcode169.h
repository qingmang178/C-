#pragma once
#ifndef leetcode169_
#define leetcode169_


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
	int majorityElement(vector<int>& nums) {
		map<int, int> mp;
		for (int i = 0; i < nums.size(); i++)
		{
			mp[nums[i]] = 0;
		}
		for (int i = 0; i < nums.size(); i++)
		{
			mp[nums[i]]++;
			if (mp[nums[i]] > nums.size() / 2)
				return nums[i];
		}
		return -1;
	}
};



#endif


