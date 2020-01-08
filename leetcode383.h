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
	bool canConstruct(string ransomNote, string magazine) {
		int a[26] = { 0 };
		for (int i = 0; i < magazine.size(); i++)
		{
			a[magazine[i] - 'a']++;

		}
		for (int i = 0; i <ransomNote.size(); i++)
		{
			a[ransomNote[i] - 'a']--;
			if (a[ransomNote[i] - 'a'] < 0)
				return false;

		}
		return true;
	}
};

#endif
