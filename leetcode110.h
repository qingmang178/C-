#pragma once
#ifndef leetcode110_
#define leetcode110_


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
	bool isBalanced(TreeNode* root) {
		if (root->left == nullptr && root->right == nullptr)
			return true;

	}
};



#endif