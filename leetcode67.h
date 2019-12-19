#pragma once
#ifndef leetcode67_
#define leetcode67_

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		int lena = a.size();
		int lenb = b.size();
		if (lena > lenb)
		{
			for (int i = 0; i != (lena - lenb); i++)
				b = '0' + b;
		}
		else if (lena < lenb)
		{
			for (int i = 0; i != (lenb - lena); i++)
				a = '0' + a;
		}
		int flag = 0;
		for (int i = a.size() - 1; i > 0; i--)
		{
			a[i] = a[i] - '0' + b[i];
			if (a[i] >= '2')
			{
				a[i] = (a[i] - '0') % 2 + '0';
				a[i - 1] = a[i - 1] + 1;
			}
		}
		a[0] = a[0] - '0' + b[0];
		if (a[0] >= '2')
		{
			a[0] = (a[0] - '0') % 2 + '0';
			a = '1' + a;
		}
		return a;
	}
};


#endif
