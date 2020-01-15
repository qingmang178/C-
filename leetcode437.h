#pragma once
#ifndef leetcode437_
#define leetcode437_


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


//* Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int pathSum(TreeNode* root, int sum) {
		if (root == nullptr)
			return 0;
		int res = findSum(root, sum);
		res += pathSum(root->left, sum);
		res += pathSum(root->right, sum);

		return res;
	}
	int findSum(TreeNode* root, int sum)
	{
		if (root == nullptr)
			return 0;
		int res = 0;
		if (root->val == sum)
		{
			res++;
		}
		res += findSum(root->left, sum - root->val);
		res += findSum(root->right, sum - root->val);
		return res;
	}
};


#endif