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
	int maxDepth1(TreeNode* root) {
		//递归法
		if (root == NULL)
			return 0;

		if (root->left == NULL && root->right == NULL)
			return 1;


		return max(maxDepth1(root->right), maxDepth1(root->left)) + 1;


	}
	int maxDepth(TreeNode* root) {
		//广度优先搜索
		if (root == NULL)
			return 0;
		deque<TreeNode*> q;
		q.push_back(root);
		int deep = 0;
		while (!q.empty())
		{
			deep++;
			int num = q.size();
			for (int i = 0; i < num; i++)
			{
				TreeNode* p = q.front();
				q.pop_front();
				if (p->left) q.push_back(p->left);
				if (p->right) q.push_back(p->right);
			}
		}
		return deep;
	}
};





#endif


