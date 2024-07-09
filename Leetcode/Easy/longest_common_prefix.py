"""
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

"""

from typing import *


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        word = strs[0]
        prefix = ""
        for index, char in enumerate(word):
            found = False
            for s in strs:
                if index > len(s) - 1 or char != s[index]:
                    found = True
                    break
            if found:
                break
            else:
                prefix += char
        return prefix


if __name__ == "__main__":
    strs = ["flower", "fl", "flight"]
    prefix = Solution().longestCommonPrefix(strs)
    print(prefix)
