#pragma once
#ifndef leetcode28_
#define leetcode28_

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		int h = haystack.size();
		int n = needle.size();
		int result = -1;
		if (n == 0)
			return 0;
		int j = 0;
		for (int i = 0; i < h; i++)
		{
			if (haystack[i] == needle[0])
			{
				for (j = 1; j < n; j++)
				{
					if (haystack[i + j] == needle[j])
						continue;
					else
					{
						break;
					}
						
				}
				if (j == n)
					return i;
			}
		}
		return -1;
	}
};






#endif
