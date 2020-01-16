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
	int arrangeCoins(int n) {
		int i = 0;
		while (1)
		{
			n = n - i;
			if (n < i + 1)
				break;
			i++;
		}
		return i;
	}
};

#endif
