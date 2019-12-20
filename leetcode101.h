#pragma once

#ifndef leetcode101_
#define leetcode101_


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
	/*bool isSymmetric(TreeNode* root) {

		return isMirror(root, root);
	}
	bool isMirror(TreeNode* t1, TreeNode* t2)
	{
		if (t1 == NULL && t2 == NULL)
			return true;
		if (t1 == NULL || t2 == NULL)
			return false;
		return (t1->val == t2->val) && isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
	}*/
	bool isSymmetric(TreeNode* root)
	{
		queue<TreeNode*> q;
		q.push(root);
		q.push(root);
		while (!q.empty())
		{
			TreeNode* t1 = q.front();
			q.pop();
			TreeNode* t2 = q.front();
			q.pop();
			if (t1 == NULL && t2 == NULL)
				continue;
			if (t1 == NULL || t2 == NULL)
				return false;
			if (t1->val != t2->val)
				return false;
			q.push(t1->left);
			q.push(t2->right);
			q.push(t1->right);
			q.push(t2->left);
		}
		return true;

		/*  java代码非递归实现
		Queue<TreeNode> q = new LinkedList<>();
	q.add(root);
	q.add(root);
	while (!q.isEmpty()) {
		TreeNode t1 = q.poll();
		TreeNode t2 = q.poll();
		if (t1 == null && t2 == null) continue;
		if (t1 == null || t2 == null) return false;
		if (t1.val != t2.val) return false;
		q.add(t1.left);
		q.add(t2.right);
		q.add(t1.right);
		q.add(t2.left);
	}
	return true;
		*/
	}
};





#endif

