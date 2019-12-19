#pragma once
#ifndef leetcode58_
#define leetcode58_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		int end = s.length() - 1;
		while (end >= 0 && s[end] == ' ')
			end--;
		if (end < 0)
			return 0;
		int i = end;
		while (i >= 0 && s[i] != ' ')
			i--;
		return end - i;


	}
};




#endif
