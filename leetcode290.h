#pragma once
#ifndef leetcode290_
#define leetcode290_


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

bool wordPattern(string pattern, string str) {
	vector<string> list1;
	stringstream out(str);
	string word;
	while (out >> word)
	{
		list1.push_back(word);
	}
	if (pattern.size() != list1.size())
		return false;
	map<char, int> mp1;
	map<string, int>mp2;

	for (int i = 0; i < pattern.size(); i++)
	{
		if (mp1[pattern[i]] != mp2[list1[i]])
			return false;
		else
		{
			if (mp1[pattern[i]] == NULL)
			{
				mp1[pattern[i]] = i + 1;
				mp2[list1[i]] = i + 1;
			}
		}
	}
	return true;
}


#endif