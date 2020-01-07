#pragma once
#ifndef leetcode0000_
#define leetcode0000_


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

using namespace std;

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> st;
		vector<int> result;
		for (int i = 0; i < nums1.size(); i++)
		{
			if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
			{
				st.insert(nums1[i]);
			}
		}
		for (int n : st)
		{
			result.push_back(n);
		}
		return result;

 	}
};


#endif
