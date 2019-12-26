#pragma once
#ifndef leetcode136_
#define leetcode136_


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
	int singleNumber(vector<int>& nums) {
		/*map<int, int> a;
		for (int i = 0; i < nums.size(); i++)
		{
			a[nums[i]]++;
		}
		map<int, int>::iterator i;
		for (i = a.begin(); i != a.end(); i++)
		{
			if (i->second == 1)
				break;
		}
		return i->first;*/
		unordered_set<int> a;
		int ans;
		for (auto i : nums) {
			if (a.count(i))
				a.erase(i);
			else
				a.insert(i);
		}
		for (auto j : a)
		{
			ans = j;
		}
		return ans;
		
	}
};




#endif
