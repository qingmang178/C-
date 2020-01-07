#pragma once
#ifndef leetcode345_
#define leetcode345_


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
	string reverseVowels(string s) {
		int i = 0;
		int j = s.size() - 1;
		unordered_set<char> mp = {'a','e','i','o','u','A','E','I','O','U'};
		while (i < j)
		{
			if (mp.count(s[i]) && mp.count(s[j]))
			{
				char tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
				i++;
				j--;
			}
			while (!mp.count(s[i])&&(i<j))
			{
				i++;
			}
			while (!mp.count(s[j]) && (i < j))
			{
				j--;
			}
		}
		return s;
	}
};

#endif
