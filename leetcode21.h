#pragma once
#ifndef leetcode20_
#define leetcode20_


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
		ListNode* p = new ListNode(NULL);
		while (p1 && p2)
		{
			if (p1->val > p2->val)
			{

			}

		}


	}
};









#endif
