"""
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false


Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
"""

from typing import *
from collections import Counter


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)


def test_isAnagram_with_anagram():
    s, t = "anagram", "nagaram"
    result = Solution().isAnagram(s, t)
    assert result == True


def test_isAnagram_with_not_anagram():
    s, t = "rat", "car"
    result = Solution().isAnagram(s, t)
    assert result == False


if __name__ == "__main__":
    test_isAnagram_with_anagram()
    test_isAnagram_with_not_anagram()
