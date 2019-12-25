#include<iostream>
#include"leetcode122.h"
using namespace std;


int main()
{
	vector<int> a = { 2,1,2,0,1 };
	Solution solu;
	int c = solu.maxProfit(a);
	cout << c;
}

