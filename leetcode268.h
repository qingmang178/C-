#pragma once
#ifndef leetcode263_
#define leetcode263_


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
	int missingNumber(vector<int>& nums) {

		//因为题目的特殊性，其实只要计算1-n的前n项和再减去参数数组的各项之和就行了。所以，直接用n项和公式可能更快。
		unordered_set<int>  a;
		for (int num : nums)
		{
			a.insert(num);
		}
		int b = nums.size();
		for (int i = 0; i < b; i++)
		{
			if (!a.count(i))
				return i;
		}
		return -1;
	}
};


#endif