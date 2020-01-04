#pragma once
#ifndef leetcode283_
#define leetcode283_


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
	void moveZeroes(vector<int>& nums) {

		int i = 0;
		int j = 0;
		for (i = 0,j = 0; j < nums.size(); j++)
		{
			if (nums[j] != 0)
			{
				nums[i] = nums[j];
				
				if (i != j)
					nums[j] = 0;
				i++;
			}
		}
		/*while (i < nums.size())
		{
			nums[i] = 0;
			i++;
		}*/
	}
};



#endif