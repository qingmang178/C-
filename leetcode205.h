#pragma once
#ifndef leetcode205_
#define leetcode205_


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
	bool isIsomorphic(string s, string t) {
		/*map<char, char> mp;
		for (int i = 0; i < s.size(); i++)
		{
			if (mp[s[i]] != NULL)
			{
				if (mp[s[i]] != t[i])
					return false;
			}
			else
			{
				mp[s[i]] = t[i];
			}
		}
		map<char, char> mp1;
		for (int i = 0; i < s.size(); i++)
		{
			if (mp1[t[i]] != NULL)
			{
				if (mp1[t[i]] != s[i])
					return false;
			}
			else
			{
				mp1[t[i]] = s[i];
			}
		}
		return true;*/

		map<char, int> mp1;
		map<char, int> mp2;
		for (int i = 0; i < s.size(); i++)
		{
			if (mp1[s[i]] != mp2[t[i]])
			{
				return false;
			}
			else
			{
				if (mp1[s[i]] == NULL)
				{
					mp1[s[i]] = i + 1;
					mp2[t[i]] = i + 1;
				}
			}
		}
		return true;
	}
};




#endif
