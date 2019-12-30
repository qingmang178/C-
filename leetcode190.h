#pragma once
#ifndef leetcode190_
#define leetcode190_


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
	uint32_t reverseBits(uint32_t n) {
		uint32_t res = 0;
		int index = 32;
		while (index--)
		{
			res <<= 1;
			res += n & 1;
			n >>= 1;
		}
		return res;
	}
};







#endif
