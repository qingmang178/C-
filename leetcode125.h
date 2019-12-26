#pragma once
#ifndef leetcode125_
#define leetcode125_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>


using namespace std;

class Solution {
public:


	bool isPalindrome(string s) {
		int i = 0;
		int j = s.size() - 1;
		while (i < j)
		{
			if (!isalnum(s[i]))
			{
				i++;
				continue;
			}
			if (!isalnum(s[j]))
			{
				j--;
				continue;
			}
			if (s[i] != s[j])
			{
				if (isdigit(s[i]) || isdigit(s[j]))
					return false;
				if (abs(s[i] - s[j]) != 32)
					return false;
			}
			i++;
			j--;

		}
		return true;
	}
};



#endif