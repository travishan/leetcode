#pragma once
#include "main.h"

//https://leetcode.com/problems/ransom-note/

class Solution
{//解决思路   用map数组保存magazine中各个字母出现的次数
public:
	bool canConstruct(string ransomNote, string magazine) {
		int map[26] = { 0 };
		for (char c : magazine) {
			++map[c - 'a'];
		}
		for (char c : ransomNote) {
			if (--map[c - 'a'] < 0) {
				return false;
			}
		}
		return true;
	}
};

void RansomNoteTest() {
	Solution s;
	cout << s.canConstruct("bjaajgea", "affhiiicabhbdchbidghccijjbfjfhjeddgggbajhidhjchiedhdibgeaecffbbbefiabjdhggihccec") << endl;
}