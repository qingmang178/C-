#pragma once
#ifndef leetcode112_
#define leetcode112_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>


using namespace std;

class Solution
{
public:
	vector<vector<int>> generate(int numRows) {
	//注意二维数组的初始化
	vector<vector<int> > a(numRows);
	if (numRows == 0)
		return a;

	a[0].push_back(1);
	for (int i = 1; i < numRows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				a[i].push_back(1);
			}
			else
			{
				a[i].push_back(a[i - 1][j - 1] + a[i - 1][j]);
			}
			
		}
	}
	return a;
}


};





#endif
