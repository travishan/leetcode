#pragma once
#include "main.h"

//https://leetcode.com/problems/ransom-note/

class Solution
{//���˼·   ��map���鱣��magazine�и�����ĸ���ֵĴ���
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