"""
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
"""

from typing import *


class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join(e.lower() for e in s if e.isalnum())
        str_len = len(s)
        for idx in range(str_len // 2):
            if s[idx] != s[str_len - 1 - idx]:
                return False
        return True


def test_isPalindrome_valid():
    s = "A man, a plan, a canal: Panama"
    result = Solution().isPalindrome(s)
    assert result == True


def test_isPalindrome_invalid():
    s = "race a car"
    result = Solution().isPalindrome(s)
    assert result == False


if __name__ == "__main__":
    test_isPalindrome_valid()
    test_isPalindrome_invalid()
