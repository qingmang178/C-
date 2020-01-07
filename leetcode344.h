#pragma once
#ifndef leetcode344_
#define leetcode344_


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
	void reverseString(vector<char>& s) {
		int i = 0;
		int j = s.size() - 1;
		while (i < j)
		{
			char temp = s[j];
			s[j] = s[i];
			s[i] = temp;
			i++;
			j--;
		}
	}
};


#endif
