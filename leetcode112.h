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
	bool hasPathSum(TreeNode* root, int sum) {
		/*if (root == NULL)
			return false;
		sum = sum - root->val;
		if (root->left == NULL && root->right == NULL)
			return (sum == 0);
		//左右子树只要有一个能达到就好
		return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
	*/


	}
};


#endif
