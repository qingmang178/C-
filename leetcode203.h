#pragma once
#ifndef leetcode203_
#define leetcode203_


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
	ListNode* removeElements(ListNode* head, int val)
	{
		ListNode* p = new ListNode(0);
		p->next = head;
		ListNode* ans = p;
		while (ans->next != nullptr)
		{
			if (ans->next->val == val)
			{
				//删除一个节点
				ListNode* temp = ans->next;
				ans->next = temp->next;
				delete temp;

			}
				
			else
				ans = ans->next;
		}
		return p->next;
		
	}

};

#endif

