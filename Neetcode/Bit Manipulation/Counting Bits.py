""" 
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 

Constraints:

0 <= n <= 105
"""

from typing import *


class Solution:
    def countBits(self, n: int) -> List[int]:
        counts = []
        for idx in range(n + 1):
            counts.append(idx.bit_count())
        return counts

    def countBitsDp(self, n: int) -> List[int]:
        dp = [0] * (n + 1)
        offset = 1
        for idx in range(1, n + 1):
            if offset * 2 == idx:
                offset = idx
            dp[idx] = 1 + dp[idx - offset]
        return dp


def test_countBits():
    n = 5
    result = Solution().countBits(n)
    assert result == [0, 1, 1, 2, 1, 2]
    result = Solution().countBitsDp(n)
    print(result)
    assert result == [0, 1, 1, 2, 1, 2]


if __name__ == "__main__":
    test_countBits()
