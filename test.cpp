#include<iostream>
#include"leetcode219.h"
using namespace std;


int main()
{
	vector<int> b = { 1,0,1,1 };
	int d = 1;
	Solution solu;
	bool c = solu.containsNearbyDuplicate(b, d);
	cout << c;
}

