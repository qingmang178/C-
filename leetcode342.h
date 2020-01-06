#pragma once
#ifndef leetcode299_
#define leetcode299_


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
	bool isPowerOfFour(int num) {
		if (num < 1)
			return false;
		while (num % 4 == 0)
			num = num / 4;
		return num == 1;
	}
};



#endif
