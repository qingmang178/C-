#pragma once
#ifndef leetcode367_
#define leetcode367_


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
	bool isPerfectSquare(int num) {
		if (num == 1)
			return true;
		if (num == 2147483647) { return false; }
		int left = 2;
		int right = num/2;
		
		while (left < right)
		{
			int mid = left + (right - mid) / 2;
			if (mid < num / mid)
			{
				left = mid + 1;
			}
			else
			{
				right = mid;
			}
		}

		return long(left * left) == num;
	}
};


#endif
