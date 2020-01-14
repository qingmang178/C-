#pragma once
#ifndef leetcode414_
#define leetcode414_


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
#include<set>
using namespace std;

class Solution {
public:
	int thirdMax(vector<int>& nums) {
		int a[3] = { INT_MIN,INT_MIN,INT_MIN };
		int flag = 0;
		int tag = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == INT_MIN && tag == 0)
			{
				flag++;
				tag = 1;
			}
			if (nums[i] == a[1] || nums[i] == a[0] || nums[i] == a[2])
				continue;
			else if (a[2] < nums[i])
			{
				flag++;
				a[0] = a[1];
				a[1] = a[2];
				a[2] = nums[i];
			}
			else if (a[1] < nums[i])
			{
				flag++;
				a[0] = a[1];
				a[1] = nums[i];
			}
			else if (a[0] < nums[i])
			{
				a[0] = nums[i];
				flag++;
			}
			else
				continue;
		}
		return flag >= 3 ? a[0] : a[2];
		
	}
};

#endif
