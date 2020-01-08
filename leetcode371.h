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
	int getSum(int a, int b) {
		while (b)
		{
			auto carry = ((unsigned int)(a & b)) << 1; // 记录a+b的进位，直到进位为0是退出
			a = a ^ b;   //结果相加
			b = carry;  //循环
		}
		return a;
	}
};
//a^b是无进位相加
//a&b是进位，因为进位需要高一位，所以还需要右移一位
//a^b+(a&b)<<1,不断循环，就可以得到结果。

#endif
