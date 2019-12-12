#pragma once
#ifndef leetcode9_
#define leetcode9_

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		vector<int> a;
		vector<int> b;
		while (x)
		{
			int tmp = x % 10;
			a.push_back(tmp);
			x = x / 10;
		}
		vector<int>::reverse_iterator riter;
		for (riter = a.rbegin(); riter != a.rend(); riter++)
		{
			b.push_back(*riter);
		}
		if (a == b)
			return true;
		else
			return false;
	}
};






#endif