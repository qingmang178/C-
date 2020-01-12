#pragma once
#ifndef leetcode404_
#define leetcode404_


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
	int sumOfLeftLeaves(TreeNode* root) {
		int sum = 0;
		queue<TreeNode *> q;
		if (root == nullptr)
			return 0;
		q.push(root);
		while (!q.empty())
		{
			TreeNode* tmp = q.front();
			q.pop();
			if (tmp->left != nullptr)
			{
				q.push(tmp->left);
				if (tmp->left->left == nullptr && tmp->left->right == nullptr)
					sum += tmp->left->val;
			}
			if (tmp->right)
			{
				q.push(tmp->right);
			}
		}
		return sum;
	}
};

#endif
