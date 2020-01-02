#pragma once
#ifndef leetcode226_
#define leetcode226_


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
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

  class Solution {
  public:
	  TreeNode* invertTree(TreeNode* root) {
		  /*if (root == nullptr)
			  return root;
		  if (root->left == nullptr && root->right == nullptr)
			  return nullptr;
		  TreeNode* temp = root->right;
		  root->right = root->left;
		  root->left = temp;

		  if (root->left != nullptr)
			  invertTree(root->left);
		  if (root->right != nullptr)
			  invertTree(root->right);

		  return root;*/

		  if (root == nullptr)
			  return root;
		  queue<TreeNode*> q;
		  q.push(root);
		  while (!q.empty())
		  {
			  TreeNode* current = q.front();
			  q.pop();
			  TreeNode* temp = current->left;
			  current->left = current->right;
			  current->right = temp;
			  if (current->left != nullptr) q.push(current->left);
			  if (current->right != nullptr) q.push(current->right);
		  }
		  return root;
		  
	  }
  };






#endif