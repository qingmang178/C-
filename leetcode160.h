#pragma once
#ifndef leetcode160_
#define leetcode160_


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
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
		ListNode* pA = headA;
		ListNode* pB = headB;
		if (headA == nullptr || headB == nullptr)
			return nullptr;
		while (pA != pB)
		{
			if (pA == nullptr)
			{
				pA = headB;
			}
			else
			{
				pA = pA->next;

			}
			if (pB == nullptr)
			{
				pB= headA;
			}
			else
			{
				pB = pB->next;
			}

		}
		return pA;
	}
};



#endif

