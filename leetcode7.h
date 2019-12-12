#pragma once
#ifndef leetcode7_
#define leetcode7_

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



class Solution {
public:
	int reverse(int x)
	{
		int ans = 0;
		while (x)
		{
			int tmp = x % 10;

			if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && tmp > 7))  
				return 0;
			if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && tmp < -8))
				return 0;			
			ans = ans * 10 + tmp;
			x /= 10;
		}
		return ans;

	}


};






#endif
