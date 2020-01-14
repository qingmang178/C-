#pragma once
#ifndef leetcode412_
#define leetcode412_


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
	vector<string> fizzBuzz(int n) {
		vector<string> a;
		for (int i = 1; i <= n; i++)
		{
			if (i % 3 == 0 && i % 5 != 0)
				a.push_back("Fizz");
			if (i % 3 != 0 && i % 5 == 0)
				a.push_back("Buzz");
			if (i % 3 != 0 && i % 5 != 0)
				a.push_back(to_string(i));
			if (i % 3 == 0 && i % 5 == 0)
				a.push_back("FizzBuzz");
		}
		return a;
	}
};

#endif

