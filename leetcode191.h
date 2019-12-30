#pragma once
#ifndef leetcode191_
#define leetcode191_


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
	int hammingWeight(uint32_t n) {
		int i = 32;
		int count = 0;
		while (i--)
		{
			if (n & 1)
				count++;
			n >>= 1;
		}
		return count;
	}
};





#endif
