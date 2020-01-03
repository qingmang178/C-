#pragma once
#ifndef leetcode242_
#define leetcode242_


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
	bool isAnagram(string s, string t) {
		/*sort(s.begin(), s.end());
		sort(t.begin(), t.end());

		return s == t;*/

		if (s.size() != t.size())
			return false;
		int count[26] = { 0 };
		for (int i = 0; i < t.size(); i++)
		{
			count[s[i] - 'a']++;
			count[t[i] - 'a']--;
		}
		for (int i = 0; i < 26; i++)
			if (count[i] != 0)
				return false;
		return true;

	}
};




#endif
