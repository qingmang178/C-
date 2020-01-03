#pragma once
#ifndef leetcode235_
#define leetcode235_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>
#include <map>
#include<unordered_set>


//* Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		int rootval = root->val;
		if (rootval > p->val&& rootval > q->val)
			return lowestCommonAncestor(root->left, p, q);
		if (rootval < p->val && rootval < q->val)
			return lowestCommonAncestor(root->right, p, q);

		return root;
	}
};

#endif
