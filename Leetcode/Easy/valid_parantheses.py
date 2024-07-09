"""
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Input: s = "()[]{}"
Output: true

Input: s = "(]"
Output: false
"""


class Solution(object):
    def isValid(self, s):
        pairs = {"(": ")", "[": "]", "{": "}"}
        stack = []
        for p in reversed(s):
            if p in pairs.values():
                stack.append(p)
            else:
                if stack and pairs[p] == stack[-1]:
                    stack.pop()
                else:
                    return False
        return not stack


print(Solution().isValid("[(){}]"))
print(Solution().isValid("[}]"))
