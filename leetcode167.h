#pragma once
#ifndef leetcode167_
#define leetcode167_


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
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int> result;
		for (int i = 0; i < numbers.size() && numbers[i] < target; i++)
		{
			result.push_back(numbers[i]);
			for (int j = i + 1; j < numbers.size() && numbers[j] <= (target - numbers[i]); j++)
			{
				if (numbers[j] == (target - numbers[i]))
				{
					result.push_back(numbers[j]);
					return result;
				}
			}
			result.pop_back();

		}
		return result;
	}
};




#endif

