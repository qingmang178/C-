#pragma once
#ifndef leetcode119_
#define leetcode119_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>


using namespace std;

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		/*vector<int> a;
		if (rowIndex == 0)
			return a;
		a.push_back(1);
		
		for (int i = 1; i < rowIndex; i++)
		{
			vector<int> b = {};
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || j == i)
					b.push_back(1);
				else
					b.push_back(a[j - 1] + a[j]);
			}
			a = b;
		}
		return a;*/
		//ţ�ƵĽⷨ
		vector<int> result;
		for (int i = 0; i <= rowIndex; i++)
		{
			result.push_back(1);
			for (int j = i-1; j > 0; --j)
			{
				result[j] += result[j - 1];
			}
		}
		return result;
	}
};


#endif
