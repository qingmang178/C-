#pragma once
#ifndef leetcode141_
#define leetcode141_


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

//定义一个单链表
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	bool hasCycle(ListNode* head) {
		unordered_set<ListNode*> a;
		ListNode* p = head;
		while (p != nullptr)
		{
			if (a.count(p))
				return true;
			else
				a.insert(p);
			p = p->next;
		}
		return false;

	}
};




#endif


