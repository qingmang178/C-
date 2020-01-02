#pragma once
#ifndef leetcode226_
#define leetcode226_


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
	bool isPowerOfTwo(int n) {
		if (n <= 0)
			return false;
		if (n == 1)
			return true;
		for (int i = 2; i < n; i=i*2)
		{
			if (n % i != 0)
				return false;
			else
				continue;
		}
		return true;
	}
};




#endif
