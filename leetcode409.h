#pragma once
#ifndef leetcode409_
#define leetcode409_


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
	int longestPalindrome(string s) {
		int a[128];
		for (int i = 0; i < s.size(); i++)
		{
			a[s[i]]++;
		}
		int ans = 0;
		for (int i = 0; i < 128; i++)
		{
			ans += a[i] / 2 * 2;
			if (a[i] % 2 == 1 && ans % 2 == 0)
			{
				ans++;
			}
		}
		return ans;
	}
};


#endif

