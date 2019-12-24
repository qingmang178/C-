#pragma once
#ifndef leetcode111_
#define leetcode111_


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
	int minDepth(TreeNode* root) {
		/*if (root == NULL)
			return 0;
		if (root->left == NULL && root->right == NULL)
			return 1;
		int min_depth = INT_MAX;
		if (root->left != NULL)
			min_depth = min(minDepth(root->left), min_depth);
		if (root->right != NULL)
			min_depth = min(minDepth(root->right), min_depth);
		return min_depth + 1;*/

		stack<pair<TreeNode*, int>> s;
		if (root == NULL)
			return 0;
		else
		{
			pair<TreeNode*, int> p1;
			p1.first = root;
			p1.second = 1;
			s.push(p1);
		}
		int min_depth = INT_MAX;
		while (!s.empty())
		{
			pair<TreeNode*, int> current = s.top();
			s.pop();
			root = current.first;
			int current_depth = current.second;
			if (root->left == NULL && root->right == NULL)
				min_depth = min(min_depth, current_depth);
			if (root->left != NULL)
			{
				pair<TreeNode*, int> p2;
				p2.first = root->left;
				p2.second = current_depth + 1;
				s.push(p2);
			}
			if (root->right != NULL)
			{
				pair<TreeNode*, int> p3;
				p3.first = root->right;
				p3.second = current_depth + 1;
				s.push(p3);
			}
		}

		return min_depth;
	}
};


#endif