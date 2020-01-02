#pragma once
#ifndef leetcode234_
#define leetcode234_


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
	bool isPalindrome(ListNode* head) {
		/*if (head == nullptr)
			return true;
		vector<int> a;
		while (head != nullptr)
		{
			a.push_back(head->val);
			head = head->next;
		}
		int i = 0;
		int j = a.size() - 1;
		while (i < j)
		{
			if (a[i] != a[j])
				return false;
			i++;
			j--;
		}
		return true;*/

		if (head == nullptr || head->next == nullptr)
			return true;
		ListNode* fast = head;
		ListNode* low = head;
		ListNode* current = head;
		ListNode* pre = NULL;

		while (fast->next!=nullptr&&fast->next->next!=nullptr)
		{
			ListNode* currentnext = current->next;
			current->next = pre;
			pre = current;
			current = currentnext;

			fast = fast->next->next;
			low = low->next;

		}
		if (fast->next == nullptr)
			low = low->next;
		while (low)
		{
			if (low->val != pre->val)
				return false;
			low = low->next;
			pre = pre->next;
		}
		return true;
	}
};



#endif
