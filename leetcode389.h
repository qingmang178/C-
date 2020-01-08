#pragma once
#ifndef leetcode389_
#define leetcode389_


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
	char findTheDifference(string s, string t) {
		//还可以求和之后再相减算出ASIIC码
		
		int a[26] = {0};
		for (int i = 0; i < s.size(); i++)
			a[s[i] - 'a']++;
		int i;
		for (i = 0; i < t.size(); i++)
		{
			a[t[i] - 'a']--;
			if (a[t[i] - 'a'] < 0)
				break;
		}
		return t[i];
	}
};

#endif
