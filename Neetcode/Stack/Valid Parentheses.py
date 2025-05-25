"""
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false


Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
"""

from typing import *


class Solution:
    def isValid(self, s: str) -> bool:
        mapping = {"(": ")", "{": "}", "[": "]"}
        s = list(s)
        stack = []
        for element in s:
            if stack and mapping.get(stack[-1]) == element:
                stack.pop()
            elif stack and element not in mapping.keys():
                return False
            else:
                stack.append(element)
        print(stack)
        if stack:
            return False
        return True


def test_isValid():
    s = "()[]{}"
    result = Solution().isValid(s)
    assert result == True


def test_isValid_invalid():
    s = "([)]"
    result = Solution().isValid(s)
    assert result == False


if __name__ == "__main__":
    test_isValid()
    test_isValid_invalid()
