#pragma once
#ifndef leetcode217_
#define leetcode217_


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
	/*bool containsNearbyDuplicate(vector<int>& nums, int k) {
		//超时
		if (nums.size() == 0)
			return false;
		for (int i = 0; i < nums.size()-1; i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[j] == nums[i] && (j - i) <= k)
					return true;
				else
					continue;
			}
		}
		return false;

	}*/

	//哈希表解法，通过
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_set<int> a;
		for (int i = 0; i < nums.size(); i++)
		{
			if (a.count(nums[i]))
			{
				return true;
			}
			a.insert(nums[i]);
			if (a.size() > k)
				a.erase(nums[i - k]);

		}
		return false;
	}

};




#endif