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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int> > a = { {} };
		if (root == nullptr)
			return a;
		deque<TreeNode*> q;
		q.push_back(root);
		while (!q.empty())
		{
			vector<int> tmp = {};
			for(int i=0;i<q.size();i++)
			{ 
			TreeNode* p = q.front();
			q.pop_front();
			tmp.push_back(q->val);
			if (p->left!=nullptr)
			{
				q.push_back(p->left);

			}
			if (p->right!=nullptr)
			{
				q.push_back(p->right);
			}
			}
			a.push_back(tmp);
		}
		return vector<vector<int>>(a.rbegin(), a.rend());;
	}
};
