""" 
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
"""

from typing import *


class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        hs = set()
        for n in nums:
            if n in hs:
                hs.remove(n)
            else:
                hs.add(n)
        return next(iter(hs))

    def singleNumber_BitManipulation(self, nums: List[int]) -> int:
        x = 0
        for n in nums:
            x ^= n
        return x


def test_singleNumber():
    nums = [4, 1, 2, 1, 2]
    result = Solution().singleNumber(nums)
    assert result == 4
    result = Solution().singleNumber_BitManipulation(nums)
    assert result == 4


if __name__ == "__main__":
    test_singleNumber()
