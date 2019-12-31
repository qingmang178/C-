#pragma once
#ifndef leetcode206_
#define leetcode206_


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
	ListNode* reverseList(ListNode* head) {
	/*	if (head == nullptr)
			return head;
		ListNode* pre = nullptr;
		ListNode* p = head;
		while (p->next != nullptr)
		{
			ListNode* p1 = p->next;
			p->next = pre;
			pre = p;
			p = p1;
		}
		p->next = pre;
		return p;*/

			ListNode* pre = nullptr;
			ListNode* p = head;
			while (p != nullptr)
			{
				ListNode* p1 = p->next;
				p->next = pre;
				pre = p;
				p = p1;
			}
			return pre;
	}
};



#endif



