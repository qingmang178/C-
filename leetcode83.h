#pragma once
#ifndef leetcode83_
#define leetcode83_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head || !head->next)
			return head;
		ListNode* p = head;
		while (p->next != NULL && p != NULL)
		{
			if (p->val == p->next->val)
			{
				p->next = p->next->next;

			}
			else
				p = p->next;
		}
		return head;
	}
};





#endif
