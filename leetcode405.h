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
	string toHex(int num) {
		string res = "";
		if (num == 0) {
			return "0";
		}
		string HexString = "0123456789abcdef";


		while (num != 0 && res.length() < 8) {
			res = HexString[num & 0xf] + res;
			num = num >> 4;
		}
		return res;
	}
};

#endif

