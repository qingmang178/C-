#pragma once
#ifndef leetcode20_
#define leetcode20_

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
	bool isValid(string s) {

		if (s[0] == ']' || s[0] == '}' || s[0] == ')')
			return false;
		map<char, char> mp;
		mp[')'] = '(';
		mp['}'] = '{';
		mp[']'] = '[';

		stack<char> st;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '[' || s[i] == '{' || s[i] == '(')
				st.push(s[i]);
			else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
			{
				if (st.empty())
					return false;//需要进行判断栈是否为空
				if (st.top() == mp[s[i]])
				{
					st.pop();
					continue;
				}
				else
					return false;
			}
		}
		if (st.empty())
			return true;
		else
			return false;
	}
};







#endif