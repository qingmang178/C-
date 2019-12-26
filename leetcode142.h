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

//����һ��������
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
	ListNode* detectCycle(ListNode* head) {
		unordered_set<ListNode*> a;
		ListNode* p = head;
		while (p != nullptr)
		{
			if (a.count(p))
				return p;
			else
				a.insert(p);
			p = p->next;
		}
		return nullptr;
	}
};


#endif
