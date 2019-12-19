#include<iostream>
#include"leetcode67.h"
using namespace std;


int main()
{
	string a = "1010";
	string c = "1011";
	Solution solu;
	string b = solu.addBinary(a,c);
	for (int i = 0; i < b.size(); i++)
		cout << b[i] << " ";




}

