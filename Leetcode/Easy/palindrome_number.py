"""
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

Input: x = 121
Output: true

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
"""


class Solution:
    def isPalindrome(self, x: int) -> bool:
        forward = []
        reverse = []
        if x < 0:
            return False
        while x:
            forward.append(x % 10)
            reverse.append(x % 10)
            x = x // 10
        reverse.reverse()
        if forward == reverse:
            return True
        else:
            return False
