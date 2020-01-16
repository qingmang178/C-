#pragma once
#ifndef leetcode0000_
#define leetcode0000_


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
	int compress(vector<char>& chars) {
		int anchor = 0;
		int write = 0;
		for (int read = 0; read < chars.size(); read++)
		{
			if (read + 1 == chars.size() || chars[read + 1] != chars[read])
			{
				chars[write++] = chars[anchor];
				if (read > anchor) {
					for (char c : to_string(read - anchor + 1))
					{
						chars[write++] = c;
					}
				}
				anchor = read + 1;
			}
				
		}
		return write;
	}
};

#endif

