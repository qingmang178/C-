#pragma once
#ifndef leetcode3_
#define leetcode3_

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


//滑动窗口类型
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.size() == 0)
			return 0;
		vector<int> str;
		int maxl = 0;
		for (int i = 0; i < s.size(); i++)
		{
			while (find(str.begin(), str.end(), s[i]) != str.end())  //vector find 函数的用法 vector<int>::iterator it = find(vec.begin(), vec.end(), findnum);
			{
				str.erase(str.begin());//vector erase 函数的用法  iterator erase(   iterator _Where); 
			}
			str.push_back(s[i]);
			int l = str.size();
			maxl = max(l, maxl);
		}
		return maxl;

	}
};


#endif
