#pragma once
#ifndef leetcode225_
#define leetcode225_


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

class MyStack {
public:
	/** Initialize your data structure here. **/
	queue<int> q1;
	queue<int> q2;
	MyStack() {

	}
	/** Push element x onto stack. */
	void push(int x) {
		q1.push(x);
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int i = 0;
		while (!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
			i++;
		}
		while (i != 1)
		{
			q1.push(q2.front());
			//top = q2.front();
			q2.pop();
			i--;
		}
		int temp = q2.front();
		q2.pop();
		return temp;



	}

	/** Get the top element. */
	int top() {
		int i = 0;
		while (!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
			i++;
		}
		while (i != 1)
		{
			q1.push(q2.front());
			q2.pop();
			i--;
		}
		int temp = q2.front();
		q1.push(temp);
		q2.pop();
		return temp;
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return q1.empty();
	}
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */






#endif
