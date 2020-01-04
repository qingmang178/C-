#pragma once

#ifndef leetcode263_
#define leetcode263_


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
	bool isUgly(int num) {
		/*if (num == 0)
			return false;
		if (num == 1)
			return true;
		if (num % 2 == 0)
			return isUgly(num / 2);
		else if (num % 3 == 0)
			return isUgly(num / 3);
		else if(num % 5 == 0)
		    return isUgly(num / 5);
		

		return false;*/
		if (num <= 0) return false;
		while (num != 1)
		{
			if (num % 2 == 0) num /= 2;
			else if (num % 3 == 0) num /= 3;
			else if (num % 5 == 0) num /= 5;
			else return false;
		}
		return true;
	}
};


#endif
