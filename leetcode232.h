#pragma once
#ifndef leetcode232_
#define leetcode232_


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



class MyQueue {
public:
	stack<int> s1;//一个栈用于入队
	stack<int> s2;//一个栈用于出队
	MyQueue() {
	}
	void push(int x) {
		s1.push(x);
	}
	int pop() {
		if (s2.empty())
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		int ans = s2.top();
		s2.pop();
		return ans;
	}
	int peek() {
		if (s2.empty())
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		int ans = s2.top();
		return ans;
	}
	bool empty() {
		return s1.empty() && s2.empty();
	}
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */





#endif

