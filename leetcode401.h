#pragma once
#ifndef leetcode401_
#define leetcode401_


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

class Solution {
public:
	vector<string> readBinaryWatch(int num) {
		vector<string> res;
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 60; j++)
			{
				if (count1(i) + count1(j) == num)
				{
					res.push_back(to_string(i) + ":" +
						(j < 10 ? "0" + to_string(j) : to_string(j)));
				}
			}
		}
		return res;
	}
	int count1(int n) {
		int res = 0;
		while (n != 0)
		{
			n = n & (n - 1);
			res++;
		}
		return res;
	}
};

#endif
