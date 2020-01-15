#pragma once
#ifndef leetcode415_
#define leetcode415_


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
#include <utility>
#include <map>
#include<unordered_set>
#include <sstream>

using namespace std;

class Solution {
public:
	string addStrings(string num1, string num2) {
		if (num1.empty())
			return num2;
		if (num2.empty())
			return num1;
		string result = "";
		int i = num1.size()-1;
		int j = num2.size()-1;
		int flag = 0;

		if (i > j)
		{
			for (int k = j; k < i; k++)
			{
				num2 = '0' + num2;
			}
		}
		if (i < j)
		{
			for (int k = i; k < j; k++)
			{
				num1 = '0' + num1;
			}
		}

		int n = num1.size()-1;
		while (n>=0)
		{
			int temp = (num1[n]-'0') + (num2[n]-'0')+flag;
			flag = temp/10;
			temp = temp % 10;
			result = to_string(temp) + result;
			n--;
			
		}
		if (flag != 0)
		{
			result = to_string(flag) + result;
		}
		return result;
	}
};

#endif
