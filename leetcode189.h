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
	void rotate(vector<int>& nums, int k) {
		/*for (int j = 1; j <= k; j++)
		{
		int a=nums[0];
		for (int i = nums.size()-1; i >= 0; i--)
		{
			nums[(i + 1) % nums.size()] = nums[i];
		}
		nums[1] = a;

		}*/
		//使用额外空间
		/*
		k=k%nums.size();
		vector<int> newvec(nums.size(),0);
		for(int i=0;i<nums.size();i++) newvec[(i+k)%nums.size()]=nums[i];
		for(int i=0;i<nums.size();i++) nums[i] = newvec[i];
		*/
		int s = nums.size();
		k %= s;
		int gcd_s_k = gcd(s, k);
		for (int i = 0; i < gcd_s_k; i++)
		{
			int temp = nums[i];
			int j = i + k;
			while (j % s != i)
			{
				int temp1 = nums[j % s];
				nums[j % s] = temp;
				temp = temp1;
				j += k;
			}
			nums[i] = temp;
		}



	}
	int gcd(int a, int b)
	{
	    if (a < b)swap(a, b);
		   return b == 0 ? a : gcd(b, a % b);
	}


	
	
};




#endif
