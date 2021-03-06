#pragma once

#ifndef leetcode13_
#define leetcode13_

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;


class Solution {
public:
	int romanToInt(string s) {
		map<char, int> mp;
		mp['I'] = 1;
		mp['V'] = 5;
		mp['X'] = 10;
		mp['L'] = 50;
		mp['C'] = 100;
		mp['D'] = 500;
		mp['M'] = 1000;
		int num = 0;
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (mp[s[i]] < mp[s[i + 1]])
			{
				num = num - mp[s[i]];
			}
			else
				num = num + mp[s[i]];
		}
		num = num + mp[s.back()];

		return num;

	}
};


#endif
