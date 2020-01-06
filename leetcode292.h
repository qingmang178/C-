#pragma once
#ifndef leetcode292_
#define leetcode292_


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
	bool canWinNim(int n) {
		if (n <= 3)
			return true;
		if (n % 4 != 0)
			return true;

		return false;
		
	}
};



#endif
