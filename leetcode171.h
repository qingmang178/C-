#pragma once
#ifndef leetcode169_
#define leetcode169_


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
	int titleToNumber(string s) {
		int l = s.length();
		if (l == 0)
			return 0;
		int sum = 0;
		int ans = 0;
		for (int i = 0; i < l; i++)
		{
			ans = s[i] - 'A' + 1;
			sum = sum * 26 + ans;
			
		}
		return sum;
	}
};






#endif
