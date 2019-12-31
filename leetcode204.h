#pragma once
#ifndef leetcode204_
#define leetcode204_


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
	int countPrimes(int n) {
		vector<bool> isprime;
		for (int i = 2; i < n; i++)
			isprime.push_back(1);
		for (int i = 2; i * i < n; i++)
		{
			for (int j = 2 * i; j  < n; j += i)
			{
				isprime[j] = false;
			}

		}
		int count = 0;
		for (int i = 2; i < n; i++)
		{
			if (isprime[i])
				count++;
		}
		return count;
    }
};


#endif
