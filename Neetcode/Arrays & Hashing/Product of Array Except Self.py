"""
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
"""

from typing import *
from collections import Counter


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result = []
        product = 1
        zeros = []
        for idx, n in enumerate(nums):
            if n != 0:
                product *= n
            else:
                zeros.append(idx)
        for idx, n in enumerate(nums):
            if len(zeros) > 1:
                result.append(0)
            elif idx in zeros:
                result.append(product)
            elif len(zeros) > 0:
                result.append(0)
            else:
                result.append(int(product / n))
        return result


def test_productExceptSelf():
    nums = [1, 2, 3, 4]
    result = Solution().productExceptSelf(nums)
    print(result)
    assert result == [24, 12, 8, 6]
    nums = [-1, 1, 0, -3, 3]
    result = Solution().productExceptSelf(nums)
    print(result)
    assert result == [0, 0, 9, 0, 0]
    nums = [0, 0]
    result = Solution().productExceptSelf(nums)
    print(result)
    assert result == [0, 0]


if __name__ == "__main__":
    test_productExceptSelf()
