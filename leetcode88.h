#pragma once
#ifndef leetcode88_
#define leetcode88_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = 0; i < nums2.size(); i++) 
		{
			nums1[m+i]=nums2[i];
		}
		sort(nums1.begin(), nums1.end());

};





#endif