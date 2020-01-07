#pragma once
#ifndef leetcode350_
#define leetcode350_


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
#include<unordered_map>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		/*vector<int> result;
		for (int i = 0; i < nums1.size(); i++)
		{
			vector<int>::iterator j;
			j = find(nums2.begin(), nums2.end(), nums1[i]);
			if (j!= nums2.end())
			{
				result.push_back(nums1[i]);
				*j = -1;
				
			}
		}
		return result;*/
		vector<int> result;
		unordered_map<int, int>map;
		for (int i = 0; i < nums1.size(); i++)
		{
			map[nums1[i]]++;
		}
		for (auto i : nums2)
		{
			if (map[i] > 0)
			{
				result.push_back(i);
				map[i]--;
			}
		}
		return result;
	}
};

#endif

