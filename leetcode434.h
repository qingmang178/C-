#pragma once
#ifndef leetcode434_
#define leetcode434_


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
	int countSegments(string s) {
		if (s.empty())
			return 0;
		int count = 0;
		int flag = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i]!=' ')
			{
				flag = 1;
				continue;
			}
			if (s[i] == ' ')
			{
				if (flag == 1)
					count++;
				flag = 0;
			}
		}
		return count;
	}
};

#endif
