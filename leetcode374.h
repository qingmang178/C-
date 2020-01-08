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

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
	int guessNumber(int n) {
		int left = 0;
		int right = n;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			int res = guess(mid);
			if (res == 1)
			{
				left = mid + 1;
			}
			else
			{
				right = mid;
			}
		}
		return left;
	}
};


#endif
