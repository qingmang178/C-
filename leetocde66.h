#pragma once
#ifndef leetcode66_
#define leetcode66_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size();
		if (digits[0] == 0)
		{
			digits[0]++;
			return digits;
		}
		else if (digits[len - 1] < 9)
		{
			digits[len - 1]++;
			return digits;
		}
		else
		{
			reverse(digits.begin(), digits.end());
			digits[0]++;
			for (int i = 0; i < len-1; i++)
			{
				if (digits[i] == 10)
				{
					digits[i] = 0;
					digits[i + 1]++;
				}
				else
					break;
			}
			if (digits[len - 1] == 10)
			{
				digits[len - 1] = 0;
				digits.push_back(1);
			}
			 reverse(digits.begin(), digits.end());
			 return digits;
		}

	}
};






#endif
