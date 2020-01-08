#include<iostream>
#include"leetcode1.h"
using namespace std;


int main()
{
	vector<int> nums = { 2,7,11,15 };
	int target = 9;
	Solution solu;
	vector<int> ans=solu.twoSum(nums, target);

	for (auto i : ans)
	{
		cout << i;
	}

}

