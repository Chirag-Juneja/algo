"""
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.



Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
"""

from typing import *


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hs = set()
        for n in nums:
            if n in hs:
                return True
            else:
                hs.add(n)
        return False


def test_containsDuplicate_with_duplicate():
    nums = [1, 2, 3, 1]
    result = Solution().containsDuplicate(nums)
    assert result == True


def test_containsDuplicate_with_no_duplicate():
    nums = [1, 2, 3]
    result = Solution().containsDuplicate(nums)
    assert result == False


if __name__ == "__main__":
    test_containsDuplicate_with_duplicate()
    test_containsDuplicate_with_no_duplicate()
