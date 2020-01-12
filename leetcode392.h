#pragma once
#ifndef leetcode392_
#define leetcode392_


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
	bool isSubsequence(string s, string t) {
		int i = 0;
		int j = 0;
		while (i < s.size() && j < t.size())
		{
			if (s[i] == t[j])
			{
				i++;
				j++;
			}
			else
				j++;
		}
		return i == s.size();
	}
};

#endif

