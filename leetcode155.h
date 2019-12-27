#pragma once
#ifndef leetcode155_
#define leetcode155_


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

class MinStack {
/*public:
	
	MinStack() {

	}

	void push(int x) {
		s.push(x);
		if (s_min.empty() || x <= s_min.top())
		{
			s_min.push(x);
		}
	}

	void pop() {
		if (s.top() == s_min.top())
			s_min.pop();
		s.pop();
	}

	int top() {
		return s.top();
	}

	int getMin() {
		return s_min.top();
	}
private:
	stack<int> s;
	stack<int> s_min;
};*/

	public:
		/** initialize your data structure here. */
		struct Node {
			int val;
			int min;
			Node* next;
			Node(int _val, Node* _next) :val(_val), min(val), next(_next) {}
		};
		Node* head;
		MinStack() {
			head = new Node(0,nullptr);
		}

		void push(int x) {
			Node* tmp = new Node(x, head->next);
			if (head->next && x > head->next->min)
			{
				tmp->min = head->next->min;
			}
			head->next = tmp;
		}

		void pop() {
			Node* tmp = head->next;
			if (tmp)
			{
				head->next = tmp->next;
				delete tmp;
			}
		}

		int top() {
			int top = 0;
			if (head->next)
			{
				top = head->next->val;
			}
			return top;
		}

		int getMin() {
			int min = 0;
			if (head->next)
			{
				min = head->next->min;
			}
			return min;
		}

		
};





#endif

