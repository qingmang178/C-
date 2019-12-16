#pragma once
#ifndef leetcode21_
#define leetcode21_


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* p1 = l1;
		ListNode* p2 = l2;
		ListNode* result = new ListNode(-1);  //注意初始化的方法
		ListNode* p = result;
		while (p1 != nullptr && p2 != nullptr)  //这里空指针使用nullptr！！！！
		{
			if (p1->val > p2->val)
			{
				p->next = p2;
				p2 = p2->next;
			}
			else
			{
				p->next = p1;
				p1 = p1->next;
			}
			p = p->next;

		}
		if (p1 != nullptr)
			p->next = p1;
		else if (p2 != nullptr)  //这里空指针使用nullptr！！！！
			p->next = p2;

		return result->next;


	}
};









#endif
