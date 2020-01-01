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
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int> a;
		for (int i = 0; i < nums.size(); i++)
		{
			if (a.count(nums[i]))
				return true;
			else
			{
				a.insert(nums[i]);
			}
		}
		return false;
	}
};


#endif





