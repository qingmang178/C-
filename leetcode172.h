#pragma once
#ifndef leetcode172_
#define leetcode172_


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
	int trailingZeroes(int n) {
		int m = 0;
		while (n >= 5)
		{
			m += n / 5;
			n = n / 5;
		}
		return m;
	}
};




#endif

