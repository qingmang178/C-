#include<iostream>
#include"leetcode14.h"
using namespace std;


int main()
{
	vector<string> a = { "flower","flow","flight" };
	Solution solu;
	string b=solu.longestCommonPrefix(a);
	cout << b;
}

