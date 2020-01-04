#pragma once
#ifndef leetcode263_
#define leetcode263_


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
	int missingNumber(vector<int>& nums) {

		//��Ϊ��Ŀ�������ԣ���ʵֻҪ����1-n��ǰn����ټ�ȥ��������ĸ���֮�;����ˡ����ԣ�ֱ����n��͹�ʽ���ܸ��졣
		unordered_set<int>  a;
		for (int num : nums)
		{
			a.insert(num);
		}
		int b = nums.size();
		for (int i = 0; i < b; i++)
		{
			if (!a.count(i))
				return i;
		}
		return -1;
	}
};


#endif