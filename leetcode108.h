#pragma once
#ifndef leetcode104_
#define leetcode104_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;



/**
 * Definition for a binary tree node.
 */
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return function(nums, 0, nums.size());

	}
	TreeNode* function(vector<int>& nums, int start, int end)
	{
		if (start == end)
		{
			return NULL;
		}
		int mid = (start + end) >> 1;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = function(nums, start, mid);
		root->right = function(nums, mid + 1, end);

		return root;
	}
};







#endif
