#pragma once
#ifndef leetcode168_
#define leetcode168_


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
	string convertToTitle(int n) {
		int temp;
		vector<int> a;
		string s;
		while (n>0)
		{
			temp = n % 26;
			if (temp == 0)
			{
				temp = 26;
				n = n/26-1;
			}
			else
			{
				n = n / 26;
			}
			a.push_back(temp);
			 
		}
		for (int i =a.size()-1; i >= 0; i--)
		{
			s += a[i]-1 + 'A';
		}
		return s;
	}
};





#endif
