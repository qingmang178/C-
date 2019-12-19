#pragma once
#ifndef leetcode38_
#define leetcode38_

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		string str="1";
		for (int i = 1; i < n; i++)
		{
			string tmp;
			for (int j = 0; j < str.size(); j++)
			{
				int count = 1;
				while (j + 1 < str.size() && str[j + 1] == str[j])
				{
					count++;
					j++;
				}
				tmp += to_string(count) + str[j];
			}
			str = tmp;
		}
		return str;


	}
};






#endif
