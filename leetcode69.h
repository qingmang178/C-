#pragma once
#ifndef leetcode69_
#define leetcode69_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


class Solution {
public:
	int mySqrt(int x) {
		long long left = 0;
		long long right = x / 2;
		if (x <= 1)
			return x;
		while (left < right)
		{
			long long mid = left + (right - left+1) / 2;
			long long res = mid * mid;
			if (res > x)
				right = mid - 1;
			else
			{
				left = mid;

			}
		}
		return left;
	}
};



#endif