#pragma once
#ifndef leetcode258_
#define leetcode258_


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
	int addDigits(int num) {
		int sum = 0;
		while (num > 0)
		{
			sum = sum + num % 10;
			if (sum >= 10)
				sum = sum % 10 + 1;
			num = num / 10;
				
		}
		return sum;
	}
};



#endif
