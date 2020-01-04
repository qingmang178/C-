#pragma once
#ifndef leetcode278_
#define leetcode278_


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

bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		int left = 1;
		int right = n;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (isBadVersion(mid))
			{
				right = mid;
			}
			else
			{
				left = mid + 1;
			}
		}
		return left;
	}
};

#endif
