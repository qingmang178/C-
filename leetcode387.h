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
	int firstUniqChar(string s) {
		int a[26] = { 0 };
		for (int i = 0; i < s.size(); i++)
		{
			a[s[i] - 'a']++;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (a[s[i]-'a'] == 1)
				return i;
		}
		return -1;
	}
};

#endif
