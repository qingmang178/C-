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
			auto carry = ((unsigned int)(a & b)) << 1; // ��¼a+b�Ľ�λ��ֱ����λΪ0���˳�
			a = a ^ b;   //������
			b = carry;  //ѭ��
		}
		return a;
	}
};
//a^b���޽�λ���
//a&b�ǽ�λ����Ϊ��λ��Ҫ��һλ�����Ի���Ҫ����һλ
//a^b+(a&b)<<1,����ѭ�����Ϳ��Եõ������

#endif
