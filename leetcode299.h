#pragma once
#ifndef leetcode299_
#define leetcode299_


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
	string getHint(string secret, string guess) {
		int Anum=0;
		int Bnum=0;

		for (int i = 0; i < secret.size(); i++)
		{
			if (secret[i] == guess[i])
			{
				//查询过的做标记
				Anum++;
				guess[i] = '#';
				secret[i] = '*';
			}

		}
		for (int i = 0; i < secret.length(); i++)
		{
			int j = guess.find(secret[i]);
			if (j != guess.npos && guess[j] != '#')
			{
				Bnum++;
				secret[i] = '*';
				guess[j] = '#';
			}
		}

		return to_string(Anum) + "A" + to_string(Bnum) + "B";
	}
};



#endif
