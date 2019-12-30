#pragma once
#ifndef leetcode202_
#define leetcode202_


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
	int bitSquare(int n)
	{
		int sum = 0;
		while (n > 0)
		{
			int bit = n % 10;
			sum += bit * bit;
			n = n / 10;
		}
		return sum;
	}
	bool isHappy(int n) {
		int slow = n;
		int fast = n;
		do
		{
			slow = bitSquare(slow);
			fast = bitSquare(fast);
			fast = bitSquare(fast);

		} while (slow!=fast);
		return slow == 1;
             		
	}
};


#endif
