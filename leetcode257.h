#pragma once
#ifndef leetcode257_
#define leetcode257_


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
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> result,leftpath,rightpath;
		string path;
		if (root == nullptr)
			return result;
		path = to_string(root->val);
		if (root->left == nullptr && root->right == nullptr)
		{
			result.push_back(path);
			return result;
		}
		if (root->left != nullptr)
			leftpath = binaryTreePaths(root->left);
		if (root->right != nullptr)
			rightpath = binaryTreePaths(root->right);

		for (auto left : leftpath)
		{
			string temp = path + "->" + left;
			result.push_back(temp);
		}
		for (auto right : rightpath)
		{
			string temp = path + "->" + right;
			result.push_back(temp);
		}
		return result;

	}
};

#endif
